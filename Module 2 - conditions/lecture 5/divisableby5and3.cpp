#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of any positive integer";
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"The entered integer is divisable by 5 and 3";
    }
    else{
        cout<<"The integer is not divisable by 5 and 3";

    }
    return 0;
}