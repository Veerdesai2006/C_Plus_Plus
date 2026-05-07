#include<iostream>
using namespace std;
int main (){
    int n;
    int y = -1*n;
    cout<<"Enter the value an integer : ";
    cin>>n;
    if(n>=0){
        cout<<"The absolute value of entered integer is :  "<<n;
    }
    
    else{
        cout<<"The absolute value of entered integer is : " <<(-n);

    }
    return 0;
}