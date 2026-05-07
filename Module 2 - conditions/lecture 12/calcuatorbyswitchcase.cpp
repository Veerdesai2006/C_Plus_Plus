#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the integer : ";
    cin>>n;
    int x;
    cout<<"Enter other integer : ";
    cin>>x;
    char y;
    cout<<"Enter the operator : ";
    cin>>y;
    switch(y){
        case '+' : 
        cout<<"The addition will be : "<< x+n ;
        break;
        case '-':
        cout<<"The substraction will be : "<<x-n;
        break;
        case '/' :
        cout<<"The division will be : "<<x/n;
        break;
        case '*' :
        cout<<"The division will be : "<< x*n;
        break;
        default :
        cout<<"Invalid number";

    }
    return 0;
}