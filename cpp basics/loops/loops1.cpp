# include <iostream>
using namespace std;
int main()
{
    cout << "enter n : ";
    int a;
    cin >> a;
    for (int i = 1; i <= a; i = i + 1)
    {
        cout << i * i<<endl;
    }
    return 0;
}