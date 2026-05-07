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
   cout<<"Now the values in array have entered now its time to print"<<endl; 
  cout<<"The elements of array are : "<<endl;
 for(int i=0;i<n;i++){
   cout<<" "<<arr[i];
   }

    return 0;
}