// Write a C++ program to remove all characters except alphabets
// in a string.
#include<iostream>
#include<string>
using namespace std;
int main(){
string str="abc123*&(gdh12";
for(char ch:str){
    if(((int)ch<65||(int)ch>90)&&((int)ch<97||(int)ch>122)){
        ch='\0';
    }
}
for(char ch: str){
    cout<<ch;
}
    return 0;
}