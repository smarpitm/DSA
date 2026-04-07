#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //brute force
    // first find max then second max
    int a[5] = {1, 2, 666, 44, 555};
    int ans = INT_MIN;
    for (int i = 0; i < 5;i++)
    {
        if (ans<a[i])
        {
            ans = a[i];
        }
    }
    // now we have a max elemnt in ans 
    int ans1 = INT_MIN;
    for (int i = 0; i < 5;i++)
    {
        if (ans1<a[i])
        {
            if (a[i]==ans)
            {
                ans1 = INT_MIN;
            }
            else {
            ans1 = a[i];
            }
        }
    }
        cout << "second max elemnet is " << ans1;
}