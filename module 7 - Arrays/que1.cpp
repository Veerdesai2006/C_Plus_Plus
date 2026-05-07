//q 1 Given an array of marks of student if the marks of any student 
// is less than 35 print its roll number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Array of size : "<<n<<"is created now entering student info "<<endl;
    for(int i=0;i<n;i++){
            cout<<"Enter the marks of roll no  "<<i<<endl;
            cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        if(arr[j]<35){
            cout<<"The Roll no which have marks less than 35 are : "<<j<<endl;
        }
    }
    return 0;
    
}