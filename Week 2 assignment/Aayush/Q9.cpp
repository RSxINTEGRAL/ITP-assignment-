#include <iostream>
using namespace std;


void printArray(int arr[], int size, int index = 0) {
    if (index == size) {
        return;}
    cout << arr[index] << " "; 
    printArray(arr, size, index + 1); 
}

int main() {
    int n;  
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >>arr[i];
    }

    cout << "The elements of the array are: ";
    printArray(arr, n);
    cout << endl;

    return 0;
}