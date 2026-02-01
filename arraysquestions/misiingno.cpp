#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // algo is
    vector<int> arr={1,2,3,4,6,0};
    
    long long n = arr.size();
    long long ans = 0;
    long long sum = (n) * (n + 1) / 2;
   for (int i = 0; i < arr.size(); i++)
    {

        ans += arr[i];
    }
    cout<< (sum - ans);
}