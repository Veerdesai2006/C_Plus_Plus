#include<iostream>
using namespace std;
void update(int n,int* ptr1,int* ptr2){
        *ptr2=n%10;
        while(n>9){
            n=n/10;
        }
        *ptr1=n;
        return;
}
int main(){
int n;
cout<<"Enter the value : ";
cin>>n;
int first_digits;
int last_digits;
int* ptr1=&first_digits;
int* ptr2=&last_digits;
update(n,ptr1,ptr2);
cout<<"The first digits is : "<<first_digits<<endl<<"The last digits is : "<<last_digits;
}