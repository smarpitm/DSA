#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main ()
{
    // // create vector
    // vector<int> v;
    // vector<int> v1(5,1);//this is a vector with 5 elements all 1
    // //size and capacity
    // cout << v.size() << v.capacity()<<endl;
    // //adding element using pushback
    // v.push_back(5);
    // cout << v.size() << v.capacity()<<endl;
    // //ading more
    // v.push_back(10);
    // cout << v.size() << v.capacity()<<endl;
    // v.push_back(15);
    // cout << v.size() << v.capacity()<<endl;
    // //update value
    // v[2] = 5;
    // cout << v[2]<<endl;
    // cout << v1.size() << v1.capacity()<<endl;
    // vector<int> v3 = {1, 2, 3};
    // //delete value
    // vector<int> vnew;
    // vnew.push_back(41);
    // vnew.push_back(42);
    // vnew.push_back(43);
    // vnew.push_back(44);
    // vnew.push_back(45);
    // vnew.pop_back();
    // cout << vnew.size() << vnew.capacity()<<endl;
    // vnew.erase(vnew.begin() + 2);
    // cout << vnew[2] << endl;
    // for (int i = 0; i < vnew.size();i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    // cout << endl;
    // // now in vnew to add 50 at index1 is the aim
    // vnew.insert(vnew.begin() + 1, 50);
    // for (int i = 0; i < vnew.size();i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    //vnew.clear()
    // vector<int> alpha;
    // alpha.push_back(2);
    // alpha.push_back(12);
    // alpha.push_back(21);
    // alpha.push_back(211);
    // cout << alpha[0] <<" ";
    // cout << alpha.front()<< " ";
    // cout << alpha[alpha.size() - 1]<<" ";
    // cout << alpha.back()  << " ";
    // cout << endl;
    // vector<int> a;
    // //copy value of vector to another
    // a = alpha;
    // for (int i = 0; i < a.size();i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // //another way to print value of a vector
    // for(auto i : a )
    //     cout << i << " ";
    vector<int> b;
    b.push_back(5111);
    b.push_back(15);
    b.push_back(51);
    b.push_back(511);
    b.push_back(-90);
    //sorting an array(increasing order)
    sort(b.begin(), b.end());
    for (int i = 0; i < b.size();i++)
    {
        cout << b[i];
    }
    // //sort in decreasing order
    // sort(b.begin(), b.end(),greater<int>());
    // for (int j = 0; j < b.size();j++)
    // {
    //     cout << b[j];
    // }
    //another method 
    //     sort(b.rbegin(), b.rend(),);
    //     for (int j = 0; j < b.size();j++)
    //     {
    //         cout << b[j];
    //     }
    cout << endl;
    cout << binary_search(b.begin(), b.end(), 15);
    cout << find(b.begin(), b.end(), 15) - b.begin();
}