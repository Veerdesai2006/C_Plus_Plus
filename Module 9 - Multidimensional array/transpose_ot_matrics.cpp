//Que. Wap to print the transpose of the matrics entered by the user and store it in a row mattics.
#include<iostream>
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
    int brr[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[j][i]=arr[i][j];
            
        }
    }
    cout<<"The transpose of matrics is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
    cout<<brr[i][j]<<" ";
            
        }
        cout<<endl;

    }
    
}