#include<iostream>
using namespace std;
int hcf(int x,int y){
    int a=1;
    for(int i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0){
                a=i;
           break;     
        }
    }
    return a;
}
int main(){
    int n;
    cout<<"enter the 1 th value : ";
    cin>>n;
    int x;
    cout<<"enter the 2 nd value : ";
    cin>>x;
    cout<<"The gcd is : "<<hcf(n,x);
    
}