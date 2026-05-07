#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the value : ";
    cin>>n;
    x=1;
    for(int i=1;i<=n;i++){
       
        cout<<" "<<x<<" ";
        x=x*2;
    }
return 0;
}