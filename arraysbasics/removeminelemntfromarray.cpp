#include <iostream>
using namespace std;
int main()
{
    int a[6] = {4, 6, 11, 12, 15,1};
    int ans = INT_MAX;
    for (int i = 0; i < 6;i++)
    {
        if (a[i]<ans)
        {
            ans = a[i];
        }
    }
    cout << ans;
    return 0;
}