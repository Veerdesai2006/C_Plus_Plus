#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the a : ";
    cin>>a;
    cout<<"Enter the b : ";
    cin>>b;
    cout<<"Enter the c : ";
    cin>>c;
    if(a>b && a>c){
        cout<< a <<" is greatest";
    }
    else if(b>c && b>a){
        cout<< b <<" is greatest";

    }
    else{
        cout<< c <<" is greatest";
    }
    return 0;
}