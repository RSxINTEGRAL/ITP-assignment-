#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout <<"Enter three sides \n";
    cin>> s1>>s2>>s3;
    
    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2) {
        cout<<"Valid triangle\n";
        if(s1==s2 && s2==s3 )
            cout<<" Equilateral triangle\n";
        else if((s1==s2 || s2==s3 || s1==s3) )
            cout<<" Isosceles triangle\n";
        else if(s1!=s2 && s2!=s3 && s1!=s3 )
            cout<<" Scalene triangle\n";
    }

    else
        cout<<"Invalid triangle\n";
    return 0;
}