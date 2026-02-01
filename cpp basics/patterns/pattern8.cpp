#include <iostream>
using namespace std;
int main ()
{
    for (int i = 1; i <= 5;i++)
    {
        //space
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        //stars
        for (int j = 1; j <= 11-2*i ;j++)
        {
            cout << "*";
        }
            // space
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

            cout << endl;
    }

        return 0;
}