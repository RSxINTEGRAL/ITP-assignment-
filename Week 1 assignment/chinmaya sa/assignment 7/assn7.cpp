// Write a C++ program to print the pattern
// sample output: for n=3                  sample output: for n=4
// 1*2*3                                                 1*2*3*4
// 4*5*6                                                 5*6*7*8
// 7*8*9                                                 9*10*11*12
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k = 1;
    cout << "enter a number" << endl;
    cin >> n;
    for (j = 1; j <= n * 3;)
    {
        for (i = 1; i <= 3; i++)
        {
            for (k = 1; k <= n; k++)
            {
                cout << j;
                if (k < n)
                {
                    cout << "*";
                }
                j++;
            }
            cout << endl;
        }
    }
    return 0;
}