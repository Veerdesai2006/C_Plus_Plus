//Que. Find the maximum value of all the element in the array 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total space of array : ";
    cin>>n;
    int arr[n];   // Decleration of array
    cout<<"The array is created of value : "<<n<<endl<<"now initalize it ."<<endl;
   int x;
   for(int i=0;i<n;i++){
    cout<<"Enter the value in array at "<<i<<" TH position : ";
    cin>>x;
    arr[i]=x;
   }                                          
   int max=arr[0];
 for(int i=1;i<n;i++){
   if(max<arr[i])
   {
   max=arr[i];
   }
   }
   cout<<"The maximum element of all element in array is : "<<max;
    return 0;

}