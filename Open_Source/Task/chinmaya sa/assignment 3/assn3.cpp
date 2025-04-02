// Write a C++ program to find the largest digit in a number.
#include <iostream>
using namespace std;
int main()
{
    long int num, digit, largest = 0;
    cout << "enter a number: ";
    cin >> num;
    long int n = num;
    while (num > 0)
    {
        digit = num % 10;
        if (digit > largest)
        {
            largest = digit;
        }
        num = num / 10;
    }
    cout << "largest digit in " << n << " is " << largest << endl;

    return 0;
}