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
    int z=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==x){
                k=i;
                z=j;
               cout<<endl<<'('<<k<<" , "<<z<<')'<<endl;
            }
        }
    }
    
    return 0;
    }