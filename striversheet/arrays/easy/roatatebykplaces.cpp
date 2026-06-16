#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Rotate array by K elements


31

Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

Examples
Input : nums = [1, 2, 3, 4, 5, 6, 7], k = 2, right
Output : [6, 7, 1, 2, 3, 4, 5]
Explanation : rotate 1 step to the right: [7, 1, 2, 3, 4, 5, 6]
rotate 2 steps to the right: [6, 7, 1, 2, 3, 4, 5] 

Input : nums = [1, 2, 3, 4, 5, 6], k=2, left
Output : [3, 4, 5, 6, 1, 2]
Explanation :rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]*/

int n;
    
    cin >> n;

    // Create a vector of size n
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    d = d % n;
    vector<int> temp(d);
    for (int i = 0; i<d;i++)
    {
        temp[i]=arr[i];
    }

    
    for (int i = d; i < n;i++)
    {
        arr[i - d] = arr[i];
    }
    int j = 0;
    for (int i = n - d; i < n;i++)
    {
        
        arr[i] = temp[j];
        j=j+1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] ;
    }
}
