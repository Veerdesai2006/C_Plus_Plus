// //que. Gvien an arry with n distinct element convert the given array to a from where all element 
// are in the range from 0 to n-1 the order of elements is the same i.e 0 is placed in the place of the 
// smallest element 1 is placed for the second smallest element
// n-1 is placed for the largest element .


#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n=5;
   int  arr[n]={19,12,23,8,16};
    vector<int>v(5,0);
    int x=0;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int min_index=-1;
        for(int j=0;j<n;j++){
            if(v[j]==1){continue;}
            else{
                if(min>arr[j]){
                    min=arr[j];
                    min_index=j;
                }
            }
        }
        arr[min_index]=x;
        v[min_index]=1;
        x++;
    }
    cout<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}