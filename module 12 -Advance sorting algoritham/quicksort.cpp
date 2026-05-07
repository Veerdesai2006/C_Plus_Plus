#include<iostream>
using namespace std;
int partision(int arr[],int si,int ei){
int pivot_element=arr[si];
int count=0;
for(int i=si+1;i<=ei;i++){
    if(arr[i]<=pivot_element){
        count++;
    }
}
int pivotIdx=count+si;
swap(arr[si],arr[pivotIdx]);
int i=si;
int j=ei;
while(i<pivotIdx && j>pivotIdx){
    while(arr[i]<=pivot_element){
        i++;
    }
    while(arr[j]>pivot_element){
        j--;
    }
    if(i<pivotIdx && j>pivotIdx){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
}
return pivotIdx;
}
void quicksort(int arr[],int si,int ei)
{
if(si>=ei){return;}
int pi = partision(arr,si,ei);
quicksort(arr,si,pi-1);
quicksort(arr,pi+1,ei);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
 //unsorted array
    for(int i=0;i<n;i++){
           cout<<arr[i];
   }
    quicksort(arr,0,n-1);
    cout<<endl<<"sorted array is : "<<endl;
    for(int i=0;i<n;i++){
           cout<<arr[i];
   }

}