#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    /*
    Print all Divisors of a given Number


17

Problem Statement: Given an integer N, return all divisors of N.
A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.
*/
    int n;
    cin >> n;
    vector<int> ls;
    for (int i = 1; i <= sqrt(n);i++)
    {
        if (n%i==0)
        {
            ls.push_back(i);
            if (n/i != i)
            {
                ls.push_back(n / i);
            }
        }
        
    }
    sort (ls.begin(), ls.end());
    for (int j = 0; j < ls.size();j++)
    {
        cout << ls[j] << " ";
    }
}