#include<iostream>
using namespace std;
int main(){
    int cp,sp,x;
    cout<<"Enter selling price : ";
    cin>>sp;
    cout<<"Enter cost price : ";
    cin>>cp;
if(sp==cp){
     cout<<"Neither profit nor loss";
}

x=sp-cp;

if(sp>cp){
    cout<<"We had made profit of : "<<x<<" Rupees";
}
if(sp<cp){
     cout<<"We had made loss of : "<<(-x)<<" Rupees";
}


return 0;
}