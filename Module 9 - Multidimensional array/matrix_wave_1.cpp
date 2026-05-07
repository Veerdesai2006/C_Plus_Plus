#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cout<<"Enter the rows of first matrix:"<<endl;
    cin>>m;
    cout<<"Enter  the column of first matrix : "<<endl;
    cin>>n;
    int a[m][n];
    cout<<"Enter the arr :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b[m][n];
    for(int i=0;i<m;i++)
    {
        if(i%2==0){
            for(int j=0;j<n;j++){
            cout<<a[i][j];}
        }
                            
        else{  
                for(int j=n-1;j>=0;j--){
                    cout<<a[i][j];
                }
            
            }
            cout<<endl;    
        }
        
    
      return 0;

}