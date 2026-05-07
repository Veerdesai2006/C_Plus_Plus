#include<iostream>
using namespace std;
int main(){    
    for(int i=1;i<=500;i++){
        int temp =i;int amstrong=0;
        while(temp>0)
        {int lastdigit=temp%10;
        amstrong=amstrong+lastdigit*lastdigit*lastdigit;
        temp=temp/10;
        }
        if(amstrong==i) {
        cout<<amstrong<<endl;}
       }
        
    return 0;
}