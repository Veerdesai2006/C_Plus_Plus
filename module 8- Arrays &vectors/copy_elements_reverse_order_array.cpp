//que.1  reverse the array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total space of array : ";
    cin>>n;
   int arr[n];   
    cout<<"The array is created of value : "<<n<<endl<<"now initalize it ."<<endl;
   int x;
   for(int i=0;i<n;i++){
    cout<<"Enter the value in array at "<<i<<" TH position : ";
    cin>>x;
   arr[i]=x;
   }
   int arr_2[n];
   int f=0;
for(int j=n;j>=0;j--){
   arr_2[f]=arr[j];
    f++;
}
        cout<<endl<<"The reverse element will be : ";
for(int k=1;k<=n;k++){
    cout<<arr_2[k]<<" ";
}
return 0;
}