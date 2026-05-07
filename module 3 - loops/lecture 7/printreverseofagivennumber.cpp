#include<iostream>
using namespace std;
int main(){
    int n,l=0,r=0;
    cout<<"enter the digit : ";
    cin>>n;
    while(n>0){
        l=n%10;
        r=(r*10)+l;
        n=n/10;
    }
    cout<<"the reverse of the given number is : "<<r;
    return 0;
}