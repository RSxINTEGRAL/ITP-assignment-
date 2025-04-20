// Write a C++ program to copy the elements of one array into another
// array.

#include <iostream>
using namespace std;
void copyarray(int a1[],int a2[],int m){
    for (int i = 0; i < m; i++)
    {
        a2[i] = a1[i];
    }
}
int main()
{
    int m;
    cout << "enter size of array" << endl;
    cin >> m;
    int a1[m];
    int a2[m];
    cout << "enter elements of array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a1[i];
    }
    copyarray(a1,a2,m);
    cout << "copied array :" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << a2[i] << endl;
    }

    return 0;
}