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
            cout<<"Enter the arr "<<i<<","<<j<<"position of array :"<<endl;
            cin>>arr[i][j];
        }
    }
    int brr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the  brr "<<i<<","<<j<<"position of array :"<<endl;
            cin>>brr[i][j];
        }
    }
   int crr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           crr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    cout<<endl<<"The Addition of the matrices is : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    
    }
    return 0;
}
    
