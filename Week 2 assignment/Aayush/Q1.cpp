#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    
    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int mergedArray[n1+n2];
    for (int i = 0; i < n1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedArray[n1 + i] = arr2[i];
    }


    
    cout << "Merged array in reverse order is :  ";
    for (int i = (n1 + n2) - 1; i >= 0; i--) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}