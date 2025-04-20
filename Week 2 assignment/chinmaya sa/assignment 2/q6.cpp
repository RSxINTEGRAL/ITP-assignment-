// Write a C++ program that takes two 2D arrays (matrices) of size
//  3×3 as input from the user. First, the program should calculate and
//  print the sum of the two original matrices. After that, it should compute
//  the transpose of both the original matrices. Finally, the program
//  should calculate and display the sum of the two transposed matrices
//  as well
#include <iostream>
using namespace std;
int main()
{
    int a1[3][3];
    int a2[3][3];
    cout << "enter elements of first array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a1[i][j];
        }
    }
    cout << "enter elements of second array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a2[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << a1[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << a2[i][j];
        }
        cout << endl;
    }
    cout << endl;
    // addition and printing sum;
    int sum[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = a1[i][j] + a2[i][j];
            cout << " " << sum[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // printing transpose of first array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << a1[j][i];
        }
        cout << endl;
    }
    cout << endl;
    // printing transpose of second array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << a1[j][i];
        }
        cout << endl;
    }
    cout << endl;
    // calculating sum of transpose and printing sum
    int sum_t[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum_t[i][j] = a1[j][i] + a2[j][i];
            cout << " " << sum_t[i][j];
        }
        cout << endl;
    }
    return 0;
}