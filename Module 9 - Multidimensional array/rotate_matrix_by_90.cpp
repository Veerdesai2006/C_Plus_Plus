//Que. Wap to rotate the matricx by 90 degrees clockwise(leetcode-48).
//Method 1.
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
  
 cout<<endl<<"The rotated matrics by 90 degree is : "<<endl;
    for(int k=0;k<m;k++){
    for(int j=m-1;j>=0;j--){
        cout<<arr[k][j]<<" ";
    }
    cout<<endl;
  }
    
    return 0;
}
