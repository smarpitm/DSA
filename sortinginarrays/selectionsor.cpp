#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // this is the most lengthy as well as basic approach
    vector<int> arr;
    int n;
    cin >>  n;
    for (int l = 0; l < n;l++)
    {
        cin >>arr[l];
    }
        for (int i = 0; i < arr.size() - 1; i++)
        {
            int index = i;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] < arr[index])
                    index = j;
            }
            swap(arr[i], arr[index]);
        }
    for (int k = 0; k < arr.size();k++)
    {
        cout << arr[k]<<" ";
    }
}