//this method is done using odd star triangle
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int nst=1;
    int nsp=0;
    for(int i=1;i<=n;i++){
        for( int j=nsp ;j<=n-1;j++){
            cout<<" ";
        }
        nsp++;
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
         nst=nst+2;
        
        cout<<endl;
    }
    return 0;
}