// Write a C++ program to sort a given array using function.
#include <iostream>
using namespace std;
//descending order
void sort(int a1[], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int k = i + 1; k <= m - 1; k++)
        {
            if (a1[k] > a1[i])
            {
                int temp;
                temp = a1[k];
                a1[k] = a1[i];
                a1[i] = temp;
            }
        }
    }
}
int main()
{
    int m;
    cout << "enter size of array" << endl;
    cin >> m;
    int a1[m];
    cout << "enter elements of array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a1[i];
    }
    sort(a1, m);
    cout << "sorted array:" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << a1[i] << endl;
    }
    return 0;
}