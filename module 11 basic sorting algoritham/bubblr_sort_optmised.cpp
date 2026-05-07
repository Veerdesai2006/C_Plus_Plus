#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={5,1,2,3,4};
    for(int i=0; i<n;i++){
        cout<<arr[i];
    }
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true){
            break;
        }
    }
    cout<<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i];
    }
}