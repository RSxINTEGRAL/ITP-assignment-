// Write a C++ program to input a decimal number and convert it into binary and
//  octal number system using loops.
#include <iostream>
using namespace std;
int main()
{
    int num, rem, oct = 0, power = 1;
    long long bin = 0;
    cout << "enter a number in decimal system" << endl;
    cin >> num;
    int n = num;
    // for octal
    while (num > 0)
    {
        rem = num % 8;
        num = num / 8;
        oct = rem * power + oct;
        power *= 10;
    }
    num = n;
    power = 1;
    // for binary(for small numbers only for large numbers we have to use arrays)
    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        bin = rem * power + bin;
        power *= 10;
    }
    cout << n << " converted to octal number system would be 0" << oct << endl;
    cout << n << " converted to binary number system would be " << bin;
    return 0;
}