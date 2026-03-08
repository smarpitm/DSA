#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector < int > arr = {5, 7, 8, 9, 1,69,-15,100,123456};
    int n = arr.size();
    for (int i = 0; i < n;i++)
    {
        for (int j = i; j > 0;j--)
        {
        
            if ( arr[j] < arr [j-1])
                swap(arr[j], arr[j - 1]);
            
            else{
                break;
            }
                }
    }
    

        // the array arr is now sorted now let us perform binary search 
  

    int start = 0;
    int end = n - 1;
  
    int key = arr[7];
    while(start <= end )

    {
        // int mid = (start + end) / 2;
        int mid = start + (end - start) / 2;
        if ( arr[mid]==key)
        {
            cout << " found at index " << mid;
            break;

        }
        else if (arr[mid]<key)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
}
//mid can also be
// mid = start + (end -start)/2