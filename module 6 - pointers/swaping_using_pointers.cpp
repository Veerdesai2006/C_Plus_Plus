//pass by refrence
#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp =  *x;
    *x=*y;
    *y=temp;
}    
int main(){
    int a=5;
    int b=8;
    swap(&a,&b);
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b;
}