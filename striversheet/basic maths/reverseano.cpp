#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Reverse Digits of A Number


19

Problem Statement: Given an integer N return the reverse of the given number.

Note: If a number has trailing zeros, then its reverse will not include them. For e.g , reverse of 10400 will be 401 instead of 00401.*/
int n;
cin >> n;
int reverse = 0;

while (n>0)
{
  int digit = n % 10;
 
  n = n / 10;
  reverse = (reverse) * 10 + digit;
}
cout << reverse;

}
