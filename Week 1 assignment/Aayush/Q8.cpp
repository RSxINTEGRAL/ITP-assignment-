#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print the increasing sequence
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for(int j=n-i;j>=1;j--)
        {
            cout <<" "; 
        }
        for(int j=n-i;j>=1;j--)
        {
            cout <<" "; 
        }
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl; // Move to the next row
    }

    return 0;
}