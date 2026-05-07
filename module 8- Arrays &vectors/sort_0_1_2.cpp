#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    int n= v.size();
      cout<<"The unsorted array is : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }    
    int a=0;
    int b=0;
    int c=0;
    for(int i=0;i<n;i++){
        if(v[i]==2){
            a++;
        }
        if(v[i]==1){
            b++;
        }
        if(v[i]==0){
            c++;
        }
    }
    for(int i=0;i<c;i++){
        v[i]=0;
    }
    for(int j=c;j<n;j++){
       v[j]=1;
    }
    for(int k=c+b;k<n;k++){
       v[k]=2;
    }
            cout<<endl;
             cout<<"The sorted array is : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    
    }
    return 0;
}