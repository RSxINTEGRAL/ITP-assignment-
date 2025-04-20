#include <iostream>
#include <climits>
using namespace std;

int main()
 {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array: ";

    for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
    }

    int smallest = INT_MAX, secondSmallest = INT_MAX;

    
    for (int i = 0; i < n; i++)
 {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        } 
        else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    
    cout << "The second smallest element is: " << secondSmallest << endl;

    return 0;
}