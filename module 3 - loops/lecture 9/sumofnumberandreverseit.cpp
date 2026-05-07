#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int lastdigit =0;
    int reverse =0;
    int x=n;
    while(n>0){
        lastdigit=n%10;
        reverse=(reverse*10)+lastdigit;
          n=n/10;
    }
    int z =reverse+x;

    cout<<"The sum of given number and its reverse is : "<< z;
}