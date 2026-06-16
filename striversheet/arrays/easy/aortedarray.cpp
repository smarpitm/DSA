#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Check if an Array is Sorted


29

Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

*/
int n;
    
    cin >> n;

    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1;i++)
    {
        if (arr[i]>arr[i+1])
        {
            
            cout<< "false";
            break;
        }
    
        
    }
    cout<<" true";
}