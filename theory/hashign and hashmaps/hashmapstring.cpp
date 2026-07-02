#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // hashmap for a string
    string s;
    cin >> s;
    //precompute
    int hash[26] = {0};
    for (int i = 0; i < s. size();i++)
    {
        hash[s[i] - 'a']++;
    }

        int q;
    cin >> q;
    while(q--)
    {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
        ;
    }
}