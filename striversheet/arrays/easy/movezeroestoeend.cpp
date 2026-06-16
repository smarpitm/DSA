#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Move all Zeros to the end of the array


30

Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.*/
int n;
    
    cin >> n;

    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    //step1:
    int j = -1;
    for (int i = 0; i < n;i++)
    {
        if (arr[i]==0)
            {
                j = i;
                break;
            }
    }
    // step 2
    if (j != -1)
    {
        for (int i = j + 1; i < n;i++)
    {
        if (arr[i]!=0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

        
    }
    for (int i = 0; i < n; i++)
        {
            cout << arr[i] <<" ";
        }

}