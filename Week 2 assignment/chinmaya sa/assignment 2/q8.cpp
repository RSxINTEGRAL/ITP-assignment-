// Find the sum of digits of a number using recursion.
#include <iostream>
using namespace std;
int sod(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return num % 10 + sod(num / 10);
}
int main()
{
    int num;
    cout << "enter the value of num " << endl;
    cin >> num;
    cout << sod(num);
    return 0;
}