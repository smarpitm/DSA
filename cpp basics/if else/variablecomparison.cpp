#include <iostream>
using namespace std;
int main()
{
    // comparing a and b
    int a, b;
    cin >> a>> b;
    if (a>b)
        cout << "a is greater than b";
    else if (a==b)
        cout << " a is equal to b";
    else
        cout << " a is less than b";

    return 0;
}
