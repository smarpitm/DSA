#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n<=1)
    {
        cout << "not prime";
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n%i==0)
        {
            cout << "not prime ";
            return 0;
        }
    }
    cout << "prime";

    return 0;
}
