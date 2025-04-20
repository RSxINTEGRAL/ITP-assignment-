// Write a C++ program to find the total number of alphabets,
//  digits and special characters in a string.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int digit = 0, alp = 0, spl = 0;
    string arr = {"abcg34@^*'"};
    for (char ch : arr)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            alp++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else
        {
            spl++;
        }
    }
    cout << "alphabets : " << alp << endl;
    cout << "digit : " << digit << endl;
    cout << "special character : " << spl << endl;
    return 0;
}