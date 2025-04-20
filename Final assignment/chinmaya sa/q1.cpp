//Write a C++ program to move all the negative elements to one
//  side of the array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[8]={1,4,-6,-7,4,2,-9,0};
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]>arr[j]){
                arr[i]+=arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]-=arr[j];
            }
        }
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}