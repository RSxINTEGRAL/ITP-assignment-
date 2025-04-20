// Write a C++ program to find maximum occurring integer in an array.
#include <iostream>
using namespace std;
int max_occuring_int(int a1[], int m)
{
    int count;
    int temp = 0, a = 0;
    for (int i = 0; i < m; i++)
    {
        count = 0;
        for (int j = 0; j < m; j++)
        {
            if (a1[i] == a1[j])
            {
                count++;
            }
        }
        if (count > temp)
        {
            temp = count;
            a = i;
        }
    }
    return a1[a];
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
    cout << endl;
    cout << "maximum occuring integer in this array :" << max_occuring_int(a1, m);
    return 0;
}