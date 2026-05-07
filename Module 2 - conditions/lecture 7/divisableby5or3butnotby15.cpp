#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of any positive integer";
    cin>>n;
    if(n%3==0 || n%5==0){
        cout<<"The entered integer is divisable by 5 or 3";
    
    if(n%15!=0)
    cout<<"The entered integer is not divisable by 15";
    else{
        cout<<"The entered integers is divisavble by 15";

    }
    }
    else{
        cout<<"The integer is not divisable by 5 or 3";

    }
    return 0;
}