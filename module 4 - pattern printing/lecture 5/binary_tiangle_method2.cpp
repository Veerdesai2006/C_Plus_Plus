#include<iostream>
using namespace std;
int main(){
    int n;
    int x=1;
    cout<<"Enter the data : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
      { 
        if((i+j)%2==0){
            x=1;
        }
        else{
            x=0;
        }
         cout<<" "<< x;     
      }

cout<<endl;
    }
    
    return 0;
}