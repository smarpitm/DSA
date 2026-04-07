#include <iostream>
using namespace std;
int main()
{
    //fibbonaci sequence
    int term1 = 0;
    int term2 = 1;
    int n;
    cout << " enter n :";
    cin >> n;
    int fibbo;
    cout << term1 << ", " << term2 << ", ";
    for (int i = 3; i<=n; i++)
    {
        fibbo = term1 + term2;
        cout << fibbo;
        if(i!=n)
            cout << " , ";

        term1 = term2;
        term2 = fibbo;
    }
        return 0;
}

    //Qi print 101 to 200
    // for (int i = 100; i <= 200; i = i + 1)
    // {
    //     cout << i << endl;
    
    // }

    // Q2 print a to z
//     for (int i = 97; i <= 122; i = i + 1)
//     {
//         char c;
//         c=i;
//         cout <<c<<endl;
//     }

//         return 0;
//     //method 2
//         char name;
//         for (name = 'a'; name <='z';name=name+1)
//         {
//             cout << name << endl;
//         }
  // Q3 n to 1
   // int n;
    // cout << " Enter n ";
    // cin >> n;
    // for (int i = n; i >= 1;i=i-1)
    // {
    //     cout << i << endl;
    // }
    //Print a sequence of numbers starting at 1, increasing by 3 every time, until you reach 100.
//     for (int i = 1; i <= 100;i=i+3)
//   {
//       cout << i << endl;
//   }
//  //q5 mutiplication table of n
//     int n;
//     cin >> n;
//     for (int i=1; i <= 10;i++)
//     {
//         cout << n * i << endl;
//     }
//         return 0;
  // power a to power n
//     int a, n;
//     cout << "enter a and then n " << endl;
//     cin >> a >> n;
//     int num;
//     num = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         num = num * a;
//     }

//     cout << num << endl;
//     return 0;
// }

    // //sum of n natural n
    // int n;
    // cout << "Enter n";
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n;i++)
    // {
    //     sum = sum + i;
    // }
    // cout << "sum is : " << sum;
    // return 0;

//     //sum of n natural n
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int factorial = 1;
//     for (int i = 1; i <= n;i++)
//     {
//         factorial = factorial * i;
//     }
//     cout << "factorial is : " << factorial;
//     return 0;
// } 
   