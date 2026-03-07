#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3, 5, 7, 9, 0, -1};
    // insertion sort algo
    int n = arr.size();
    for (int i = 0; i < n;i++)
    {
        for (int j = i; j > 0;j--)
        {
        
            if ( arr[j] < arr [j-1])
                swap(arr[j], arr[j - 1]);
            
                
        }
    }
    for (int i = 0; i < n;i++)
        {
            cout << arr[i] << " ";
        
        }
}