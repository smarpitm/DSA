const vscode = require('vscode');
const path = require('path');

function isCppFile(document) {
  if (!document) {
    return false;
  }

  const ext = path.extname(document.fileName).toLowerCase();
  return document.languageId === 'cpp' || ext === '.cpp' || ext === '.cc' || ext === '.cxx' || ext === '.hpp' || ext === '.h';
}

async function ensureFile(uri) {
  try {
    await vscode.workspace.fs.stat(uri);
  } catch (err) {
    await vscode.workspace.fs.writeFile(uri, new Uint8Array());
  }
}

async function openInputOutput(editor) {
  if (!editor || !editor.document || !isCppFile(editor.document)) {
    vscode.window.showErrorMessage('Open a C++ file first to use DSA I/O commands.');
    return;
  }

  const workspaceFolder = vscode.workspace.getWorkspaceFolder(editor.document.uri);
  const root = workspaceFolder ? workspaceFolder.uri : vscode.Uri.file(path.dirname(editor.document.uri.fsPath));
  const inputUri = vscode.Uri.joinPath(root, 'input.txt');
  const outputUri = vscode.Uri.joinPath(root, 'output.txt');

  await ensureFile(inputUri);
  await ensureFile(outputUri);

  const openUris = vscode.window.visibleTextEditors.map(e => e.document.uri.toString());

  if (!openUris.includes(inputUri.toString())) {
    await vscode.window.showTextDocument(inputUri, {
      viewColumn: vscode.ViewColumn.Beside,
      preview: false,
      preserveFocus: true
    });
  }

  if (!openUris.includes(outputUri.toString())) {
    await vscode.window.showTextDocument(outputUri, {
      viewColumn: vscode.ViewColumn.Three,
      preview: false,
      preserveFocus: true
    });
  }

  vscode.window.showInformationMessage('DSA I/O panels opened.');
}

async function runCompileAndRun(editor) {
  if (!editor || !editor.document || !isCppFile(editor.document)) {
    vscode.window.showErrorMessage('Open a C++ file first to run DSA I/O.');
    return;
  }

  await openInputOutput(editor);

  const targetTaskName = 'Compile and run with input.txt';
  const allTasks = await vscode.tasks.fetchTasks();
  const existingTask = allTasks.find(task => task.name === targetTaskName);

  try {
    if (existingTask) {
      await vscode.tasks.executeTask(existingTask);
      vscode.window.showInformationMessage('Running current C++ file with input.txt.');
      return;
    }

    const fileDir = path.dirname(editor.document.fileName);
    const fileBase = path.basename(editor.document.fileName, path.extname(editor.document.fileName));
    const command = `C:\\msys64\\ucrt64\\bin\\g++.exe -std=c++17 -g -o "${fileBase}.exe" "${editor.document.fileName}" && .\\${fileBase}.exe < input.txt > output.txt`;
    const execution = new vscode.ShellExecution(command, { cwd: fileDir });
    const compileTask = new vscode.Task(
      { type: 'shell' },
      vscode.TaskScope.Workspace,
      targetTaskName,
      'dsaIO',
      execution
    );

    await vscode.tasks.executeTask(compileTask);
    vscode.window.showInformationMessage('Running current C++ file with input.txt.');
  } catch (err) {
    vscode.window.showErrorMessage('DSA I/O run command failed: ' + (err.message || err));
    console.error(err);
  }
}

function activate(context) {
  context.subscriptions.push(vscode.window.onDidChangeActiveTextEditor(openInputOutput));
  context.subscriptions.push(vscode.commands.registerCommand('dsaIO.openInputOutput', async () => {
    await openInputOutput(vscode.window.activeTextEditor);
  }));
  context.subscriptions.push(vscode.commands.registerCommand('dsaIO.openAndRun', async () => {
    await runCompileAndRun(vscode.window.activeTextEditor);
  }));

  if (vscode.window.activeTextEditor) {
    openInputOutput(vscode.window.activeTextEditor);
  }
}

function deactivate() {}

module.exports = {
  activate,
  deactivate
};
