#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the digit : ";
    cin>>n;
    int fact =1,j=n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<< " " <<fact; 
    
    return 0;
}