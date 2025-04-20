#include <iostream>
using namespace std;


void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++)
         {
            if (arr[i] > arr[j])
             {
                //using Bubble sort
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n; 
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortArray(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}