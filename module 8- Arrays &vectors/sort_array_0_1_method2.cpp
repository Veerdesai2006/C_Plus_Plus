//Que. sort the arry of 0's and 1's (Traverse array for only one time).
// Method -2 Double pointers.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    int n= v.size();
    int noz=0;//no of zeros
    cout<<"The unsorted array is : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

    int x=0;
    int y=n-1;
    while(x<y){
        if(v[y]==1){
            y--;
        }
        if(v[x]==0){
            x++;
        }
        if(x>y){
            break;
        }
        if(v[x]==1 && v[y]==0){
            //swaping    
            int temp;
                v[x]=0;
                v[y]=1;
                x++;
                y--; 
            }
       
    }
    cout<<endl<<"The sorted array is : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}