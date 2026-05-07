#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the base : ";
    cin>>n;
    int x;
    cout<<"Enter the power : ";
    cin>>x;
    float product=1;
    if(x>0){
    for(int i=1;i<=x;i++){
        product=product*n;
    }
    }
    else{
        for(int i=-1;i>=x;i--)
        
       { product= (1.0/n)*product;}
    }
    if(n==0 && x==0){
        cout<<"not defined";
    }
    else{
        cout<<"The value of "<<n<<" raised to "<<x<<" is "<<product;
    }
    return 0;
}