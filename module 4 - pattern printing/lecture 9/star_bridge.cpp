#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int nst=n-1;
    int nsp=1;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for( int j=1 ;j<=nst;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        for( int m=1 ;m<=nst;m++){
            cout<<"*";
        }
        nst--;
        
        cout<<endl;
    }
    return 0;
}