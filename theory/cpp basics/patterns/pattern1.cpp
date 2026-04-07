#include <iostream>
using namespace std;
int main()
{
    // paterrn 1 
    //  *****
    //  *****
    //  *****
    //  *****
    //  *****
    //first make it 5 by 5
    int n;
    cout << " Enter n :";
    cin >> n;
    for (int j = 1; j <= n;j++)
       { for (int i = 1; i <= n; i++)
        {
            cout << "*";
        }
    cout << endl;}
    return 0;
}