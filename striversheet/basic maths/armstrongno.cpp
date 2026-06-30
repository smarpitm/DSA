#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Check if a number is Armstrong Number or not


18

Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.*/

int n;
cin >> n;
int counter = 0;
int no=0;
int og = n;
while (n>0)
{
  int digit = n % 10;
  no = no + digit *digit*digit;

  n = n / 10;
}
if (og==no)
{
    cout << "armstrong no";
}
else
{
    cout << " not armstrongno";
}
}

