#include <iostream>
#include <vector>
using namespace std;
int main()
    {
        vector<int> v;
        v.push_back(4);
        vector<int> b= {1, 2, 3, 4, 5};
        vector<int> c(5);
        for (int i = 0; i < 5;i++)
        {
            cin >> c[i];
        }
        c.pop_back();
        cout<<c.at(0);
    }
    