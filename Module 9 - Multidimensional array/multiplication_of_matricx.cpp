#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    int n;
    cout<<"Enter the rows of first matrix:"<<endl;
    cin>>m;
    cout<<"Enter  the column of first matrix : "<<endl;
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the arr "<<i<<","<<j<<"position of array :"<<endl;
            cin>>a[i][j];
        }
    }
    int p;
    int q;
    cout<<"Enter the rows of second matrix :"<<endl;
    cin>>p;
    cout<<"Enter  the column of second matrix : "<<endl;
    cin>>q;
    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<"Enter the arr "<<i<<","<<j<<"position of array :"<<endl;
            cin>>b[i][j];
        }
    }
    int res[m][q];
    if(p==n){
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int r=0;r<n;r++)
           { res[i][j]+=a[i][r]*b[r][j];
           }        
                    
        }
    }
   
    cout<<endl<<"The Multiplication of the matrices is : ";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
          
        }
        cout<<endl;
    
    }
}
else{
    cout<<"The matrix cant be multiplied";
}
    return 0;

}