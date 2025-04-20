// Take two array as input, merge them and print it in reverse order
// using loop
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter size of first array" << endl;
    cin >> m;
    cout << "enter size of second array" << endl;
    cin >> n;
    int a1[m];
    int a2[n];
    cout << "enter elements of first array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a1[i];
    }
    cout << "enter elements of second array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
    }
    int a3[m + n];
    for (int i = 0; i < (m + n); i++)
    {
        a3[i] = a1[i];
        if (i >= m)
        {
            a3[i] = a2[i - m];
        }
    }
    cout << "merged array in reverse order:"<<endl;
    for (int i = (m + n - 1); i >= 0; i--)
    {
        cout << a3[i] << endl;
    }
    return 0;
}