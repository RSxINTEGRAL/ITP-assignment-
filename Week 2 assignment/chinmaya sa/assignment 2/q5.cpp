// Write a C++ program to find the second smallest elements in a
//   given array of integers(all elements of array distinct).
#include <iostream>
using namespace std;
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
    cout << "second smallest integer is: " << a1[m - 2];
    return 0;
}