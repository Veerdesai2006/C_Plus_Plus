// Que. Find the element x in the array take array & x as input.
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
   int num;
   cout<<"Enter the element you want to find : "<<endl;
   cin>>num;
   bool a=false;
 for(int i=0;i<n;i++){
    //Here to remove the problem of re repeating loop in else condition we use bool checkmark.
   if(arr[i]==num)
   {
   a=true;
   }
   }
   if(a==true){
    cout<<"The Entered number is present in list";
   }
   else{
    cout<<"The entered number is not present in list";
   }
    return 0;
}
