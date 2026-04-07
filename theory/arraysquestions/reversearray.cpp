#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int> temp;
    for (int i=5;i>=0;i--)
    {
        temp.push_back(arr[i]);
    }
    for (int j = 0; j< temp.size();j++)
    {
        cout << temp[j];
    }
}