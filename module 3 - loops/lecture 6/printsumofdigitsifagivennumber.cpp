#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the digit : ";
    cin>>n;
    int i;
    int j=0;
    while(n>0) {
     i = n%10;
    n=n/10;
    j=i+j;
    }
    cout<<"the sum of given digits is : "<<j;
   
    return 0;
}