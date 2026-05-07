#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the positive integer : ";
    cin>>n;
    
 if (n==0){
        cout<<"the number is neither even nor odd";

    }


    if(n%2==0){
        cout<<"The number is even";

    }
    
    else{
        cout<<"The number is odd";
        
    }

    return 0;
}