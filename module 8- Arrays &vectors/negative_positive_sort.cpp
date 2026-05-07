//que. Move all negative numbers to beginning and 
//      positive to end with constant extra space.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(5);
    v.push_back(5);
    v.push_back(-4);
    v.push_back(-4);
    v.push_back(5);
    v.push_back(6);
    int n= v.size();
    int noz=0;//no of zeros
    cout<<"The unsorted array is : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

    int x=0;
    int y=n-1;
    while(x<y){
        if(v[y]>0){
            y--;
        }
        if(v[x]<0){
            x++;
        }
        if(x>y){
            break;
        }
        if(v[x]>0 && v[y]<0){
            //swaping    
            int temp;
                temp=v[x];
                v[x]=v[y];
                v[y]=temp;
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