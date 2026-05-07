//Que Find the next permutation of array
//Note - If not possible then print in the sorted order in accending order.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void permutation(vector<int>& v){
int n=v.size();
int idx=-1;
for(int i=n-2;i>=0;i--){
    if(v[i]<v[i+1]){
        idx=i;
        break;
    }
}
if(idx==-1){
    reverse(v.begin(),v.end());
    return;
}
    reverse(v.begin()+idx+1,v.end());
    int y=-1;
    for(int i=idx+1;i<n;i++){
    if(v[i]>v[idx]){
        y=i;
        break;
    }

}
int temp;
temp=v[idx];
v[idx]=v[y];
v[y]=temp;
    return;

}
int main(){
    vector<int>v1;
   v1.push_back(1);
   v1.push_back(2);
   v1.push_back(3);
   v1.push_back(4);
   permutation(v1);
           cout<<endl;
            cout<<"The next permutation of array is : ";
   for(int i=0;i<v1.size();i++){
       cout<<v1[i];
   }
   return 0;
}