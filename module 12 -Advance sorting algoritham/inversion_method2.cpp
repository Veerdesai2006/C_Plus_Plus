#include<iostream>
#include<vector>
using namespace std;
int c=0;
int inverison(vector<int>& a,vector<int>& b){
  int i=0;//for a
  int j=0;//for b
  int count=0;
  while(i<a.size()&&j<b.size())
  {
    if(a[i]>b[j]){
        count=count+(a.size()-i);
        j++;
    }
    else{
        i++;
    }

 }
return count;
}
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
int n1=a.size();
int n2=b.size();
int i=0,j=0,k=0;

while(i<n1 && j<n2){
      if(a[i]<=b[j]){
            res[k]=a[i];         
            k++;
            i++;
      }
      else{
            res[k]=b[j];
            k++;
            j++;
      }     
}
if(i==n1){while(j<n2){
      res[k]=b[j];
      k++;
      j++;
}}
if(j==n2){while(i<n1){
      res[k]=a[i];
      k++;
      i++;
}}
}
void merge_sort(vector<int>& v){
int n=v.size();
//base case to stop recursion
if(n==1){
      return;
}
//getting the size of arrays of which we are gona split the array
int n1=n/2;
int n2=n-n/2;
vector<int>a(n1);
vector<int>b(n2);
//now copying the elements of the array
for(int i=0;i<n1;i++){
      a[i]=v[i];
}
for(int i=0;i<n2;i++){
      b[i]=v[i+n1];
}
//now recursively applying the mergesort on a and b 
merge_sort(a);
merge_sort(b);
//merging two sorted arrays
 c= c + inverison(a,b);
merge(a,b,v);
}
int main(){
      int arr[]={5,1,8,2,3};
      int n=sizeof(arr)/sizeof(arr[0]);
      vector<int>v(arr,arr+n);
      merge_sort(v);
      cout<<c;
      
}