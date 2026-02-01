#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 44, 555};
    int ans = INT_MIN;
    for (int i = 0; i < 5;i++)
    {
        if (ans<a[i])
        {
            ans = a[i];
        }
    }
    cout << "largest elemnt is " << ans;
}