#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the marks of student";
    cin>>n;
    (n<33) ? cout<<"The student is fail" : cout<<"The student is passed ";
    return 0;
}