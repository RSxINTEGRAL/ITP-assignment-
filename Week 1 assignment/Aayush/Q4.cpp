#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter a number"<<endl;
    cin>>n; 
    int bin=0,oct=0,rem=0;
    int num=n;
    while(n!=0)
    {
        rem=n%2;
        bin=bin*10+rem;
        n=n/2;
    }
    while(num!=0)
    {
        rem=num%8;
        oct=oct*10+rem;
        num=num/8; 
    }
    cout<<"Binary   is "<<bin<<endl;   
    cout<<"Octal  is "<<oct<<endl;
    return 0;
}