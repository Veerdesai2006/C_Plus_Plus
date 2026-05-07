//Que. Wap to print the transpose of the matrics entered by the user and store it in a row mattics.
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the rows & column :"<<endl;
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the "<<i<<","<<j<<"position of array :"<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"The original matrics is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
    cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;

    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=1+i;j<m;j++){
            int temp;
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            
            
        }
    }
    cout<<"The transpose of matrics is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
    cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;

    }
    return 0;
}