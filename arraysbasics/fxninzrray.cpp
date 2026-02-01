#include <iostream>
#include <vector>
using namespace std;
void fun(int a[] , int n)
    {
        for (int i = 0; i < n;i++)
        {
            cout << a[i] << " ";
        }
    }


int main()
{
    
    
    int arr[5] = {0, 1, 2, 3, 4};
    fun(arr, 5);
}