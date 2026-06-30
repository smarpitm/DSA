#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Check if a number is Palindrome or Not


18

Problem Statement: Given an integer N, return true if it is a palindrome else return false.

A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.*/

int n;
cin >> n;
int reverse = 0;
int original = n;

while (n>0)
{
  int digit = n % 10;
 
  n = n / 10;
  reverse = (reverse) * 10 + digit;
}
if  (reverse==original)
{
    cout << "palindrome";
}
else
{
    cout << "not palindrome";
}

}
