#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the value : ";
    cin>>n;
    x=4;
    for(int i=1;i<=n;i++){
       
        cout<<" "<<x<<" ";
        x=x+3;
    }
return 0;
}