//Here we will find kth smallest element using quicksort
// //In optimized version of quick sort we will take the pivot to middle element
// arr[si+ei/2] instead of first or last element 

#include<iostream>
using namespace std;
int partision(int arr[],int si,int ei){
int pivot_element=arr[(si+ei)/2];
int count=0;
for(int i=si;i<=ei;i++){
    if(i==(si+ei)/2){continue;}

    if(arr[i]<=pivot_element){
        count++;
    }
}
int pivotIdx=count+si;
swap(arr[(si+ei)/2],arr[pivotIdx]);
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
int kth_smallest(int arr[],int si,int ei, int k)
{
int pi = partision(arr,si,ei);
if(pi+1==k){return arr[pi];}
else if(pi+1<k){return kth_smallest(arr,pi+1,ei,k);}
else{return kth_smallest(arr,si,pi-1,k);}
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4,-8};
    int k=1;
    int n= sizeof(arr)/sizeof(arr[0]);    
     cout<<kth_smallest(arr,0,n-1,k);
    

}