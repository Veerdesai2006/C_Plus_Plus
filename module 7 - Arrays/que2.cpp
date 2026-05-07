//QUE.1 calculate the sum of all the element in the given array.
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
   int sum=0;
   for(int j=0;j<n;j++){
    sum=sum+arr[j];
   }
   cout<<"The sum of all elements of array is : "<<sum;
   return 0;
}