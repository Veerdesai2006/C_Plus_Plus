// Que. Sort the array of 0,1,2(leet code 75).
            //Method 1 with two passes.
#include<iostream>
#include<vector>
using namespace std;
void sort_colours(vector<int> &x){
    int n =x.size();
    int a=0;
    int b=0;
    int c=0;
    for(int i=0;i<n;i++){
        if(x[i]==2){
            a++;
        }
        if(x[i]==1){
            b++;
        }
        if(x[i]==0){
            c++;
        }
    }
    // for(int i=0;i<c;i++){
    //     x[i]=0;
    // }
    // for(int j=c;j<n;j++){
    //    x[j]=1;
    // }
    // for(int k=c+b;k<n;k++){
    //    x[k]=2;
    // }
    for(int i=0;i<n;i++){
        if(i<c){
            x[i]=0;
        }
        else if(i<c+b){
            x[i]=1;
        }
        else{
            x[i]=2;
        }
    }
}
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
            sort_colours(v);
            cout<<endl;
             cout<<"The sorted array is : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    
    }
    return 0;
}