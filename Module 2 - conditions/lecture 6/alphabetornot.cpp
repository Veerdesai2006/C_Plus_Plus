#include<iostream>
using namespace std;
int main (){
    char n;
cout<<"Enter the character : ";
cin>>n;
if(n>=97 && n<=122){
    cout<<"The entered character is  lower case alphabet";
}
else if(n>=65 && n<=90){
    cout<<"The entered character is uper case alphabet";
}
else{
    cout<<"The entered alphabet is not a character";
}
return 0;
}