#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{111, 2, 0, -1, -999, 1010};

    "try to sort it using bubble sort";
    for (int j = 0; j < arr.size()-1; j++)
    {
        for (int i = 0; i < arr.size()-1-j ; i++)

        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
    for (int i = 0; i < arr.size();i++)
    {
        cout << arr[i] << " ";
    }
    }
        