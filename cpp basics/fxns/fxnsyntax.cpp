#include <iostream>
using namespace std;


bool prime(int n)
{
     
    if (n<=1)
    {
        
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n%i==0)
        {
           
            return 0;
        }
    }
    return 1;

    return 0;
}
int factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n;i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int sum(int a, int b)
{
    int ans = a + b;
    return ans;

}
void fun1()
{
    cout << " hello world";
}

int main()
{
    int a, b;
    cin >> a >> b;
    // cout << prime(a)<<endl;
    // cout << factorial(a)<<endl;
    // cout << prime(b)<<endl;
    // cout << factorial(b)<<endl;
    // cout << prime(b - a)<<endl;
    // cout << factorial(b - a)<<endl;
    // cout << sum(a, b);
    fun1();
    return 0;
}
