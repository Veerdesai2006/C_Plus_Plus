#include<iostream>
using namespace std;

int main(){
int arr[]={5,4,3,2,1};
int n = sizeof(arr)/sizeof(arr[0]);
int i=0;
while(i<n){
 int correct_index=(arr[i]-1);
    if(i==correct_index){
        i++;
    }
    else{
        swap(arr[i],arr[correct_index]);
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i];
}
return 0;
}