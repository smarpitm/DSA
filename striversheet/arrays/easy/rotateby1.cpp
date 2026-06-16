#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*Left Rotate the Array by One


    21
    
    Problem Statement: Given an integer array nums, rotate the array to the left by one.
    
    Note: There is no need to return anything, just modify the given array.
    }*/

    int n;
    
    cin >> n;

    // Create a vector of size n
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] ;
    }
}
