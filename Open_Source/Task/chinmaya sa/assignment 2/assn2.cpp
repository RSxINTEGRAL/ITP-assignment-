//  Write a C++ program to input 3 sides of triangle and a triangle can be drawn
//  from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
//  scalene triangle.
#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter the three sides of a triangle" << endl;
    cin >> a >> b >> c;
    if (a + b <= c || b + c <= a || a + c <= b)
    {
        cout << "Triangle can't be drawn" << endl;
    }
    else
    {
        cout << "Triangle can be drawn" << endl;
        if (a == b && b == c)
        {
            cout << "It is an Equilateral traingle" << endl;
        }
        else if (a == b || b == c || c == a)
        {
            cout << "It is an Isoceles traiangle" << endl;
        }
        else
        {
            cout << "It is an scalene triangle" << endl;
        }
    }
    return 0;
}