// Que. find the second largest element of the give array
#include<iostream>
#include<climits>
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
   int second_largest=INT_MIN;
   int max=INT_MIN;
   for(int i=0;i<n;i++){
    if(max<arr[i]){
    max=arr[i];
    }
   }
    for(int j=0;j<n;j++){
        if(second_largest<arr[j] && arr[j]!=max)
            {
                second_largest=arr[j];
            }
            
    }
   
   cout<<second_largest;
   return 0;
}