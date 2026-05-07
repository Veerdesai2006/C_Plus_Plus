//  Que. Find the last occurence of x in the array/vector.   
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int c;
        cout<<"input : "<<endl;
        cin>>c;
        a.push_back(c);
    }                             
    int k=-1; 
    for(int j=n;j>0;j--){
          if(a[j]==x){
            k=j;
        break;
        }
    }
    cout<<"The last occurence of x is : "<<k;
    return 0;
    }