#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows : ";
    cin>>n;
    int x;
    cout<<"Enter the column : ";
    cin>>x;
    for(int i=1;i<=n;i++){
        for(int j=65;j<=x-1+65;j++){
            cout<<(char)j;
        }
        cout<<endl;
    }
    return 0;
}