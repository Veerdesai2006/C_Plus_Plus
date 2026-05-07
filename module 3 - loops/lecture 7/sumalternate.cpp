#include<iostream>
using namespace std;
int main(){
    int n,sum=0,r=0;
    cout<<"enter the digit : ";
    cin>>n;
   for(int i=1;i<=n;i++)
   {
    if(i%2==0){
        sum=sum-i;
    }
    else{
        sum=sum+i;
    }
   }

    cout<<"the sum of the given n is : "<<sum;
    return 0;
}