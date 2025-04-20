// Find the Nth Fibonacci number using recursion.
#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;
    cout << "nth term of fibonacci series is " << fibo(n);
    return 0;
}