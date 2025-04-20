// Print all elements of an array using recursion
#include <iostream>
using namespace std;
void call_arr(int array[], int n)
{
    if (n == 0)
    {
        return;
    }
    call_arr(array, n - 1);
    cout << " ";
    cout << array[n - 1];
}
int main()
{
    int n = 5;
    int array[5] = {0, 1, 2, 3, 4};
    call_arr(array, n);
    return 0;
}