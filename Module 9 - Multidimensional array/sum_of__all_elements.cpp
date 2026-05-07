#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"Enter the rows :"<<endl;
    cin>>n;
    cout<<"Enter  the column : "<<endl;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the "<<i<<","<<j<<"position of array :"<<endl;
            cin>>arr[i][j];
        }
    }
   int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           sum=sum+arr[i][j];
        }
    }
        cout<<sum<<endl;
    
    }
