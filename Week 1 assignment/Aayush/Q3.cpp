#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int max=0,rem=0;
    while(n!=0)
    {
        rem=n%10;
        if(rem>max)
            max=rem;
            
        n=n/10;
    }cout <<"Maximum digit is: " << max << endl;
    return 0;   
}