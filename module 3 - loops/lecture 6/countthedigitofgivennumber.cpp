#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the digit : ";
    cin>>n;
    int i=0;
    int j=n;
    while(n>0) {
    n=n/10;
    i++;    
    }
    if(j==0){
        cout<<1<<" digit number";
    }
    else{
        cout<<i<<" digit number";
    }
    return 0;
}