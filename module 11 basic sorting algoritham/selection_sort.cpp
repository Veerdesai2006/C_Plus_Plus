#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=5;
    int arr[n]={5,3,1,4,2};
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int min_index=-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){min=arr[j];
            min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}