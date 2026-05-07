#include<iostream>
using namespace std;
int main(){
    int n;
    int y=0;
    cout<<"Enter the data : ";
    cin>>n;
    int x; //declare any number
    for(int i=1;i<=n;i++){
           if(i%2==0){
            x=0;
        }
        else{
            x=1;
        }
        for(int j=1;j<=i;j++)
      { 
         cout<<" "<< x;  
         if(x==1)  {
        x=0;}
        else{
            x=1;
        }
       }

          
       cout<<endl;
    
    }
    
    return 0;
}