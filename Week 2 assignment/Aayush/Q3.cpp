#include<iostream>
using namespace std;
int main() 
{
    int n; 
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int arr2[n];
    for (int i = 0; i < n; i++) {
        arr2[i] = arr[i];
    }

    cout<<"New Array is : ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;   
    return 0;
}