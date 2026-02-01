#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3};
    int temp = arr[arr.size()-1];
        for (int i =arr.size()-2;i>=0;i-- )
        {
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
        for (int j = 0; j < arr.size();j++)
        {
            cout << arr[j];
        }
}