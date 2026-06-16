#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Remove Duplicates in-place from Sorted Array




Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.*/

int n;
    
    cin >> n;

    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i]==arr[j])
        {
            ;
        }
        else{
            arr[i + 1] = arr[j];
            i = i + 1;
        }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] ;
        }
    
    cout << endl <<i + 1;
}