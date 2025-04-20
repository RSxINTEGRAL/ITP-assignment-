// Write a C++ program to check if a Number is Perfect square using loops.
#include <iostream>
using namespace std;
int main()
{
    int num,i;
    bool isperfectsquare;
    cout << "enter a number" << endl;
    cin >> num;
    for (i = 0; i <= num; i++)
    {
        isperfectsquare  = false;
        if (i * i == num)
        {
        isperfectsquare =true;
            break;
        }
    }
    if(isperfectsquare){
        cout << num << " is a perfect square of " << i << endl;
    }else{
        cout << num << " is not a perfect square"<< endl;
    }

    return 0;
}