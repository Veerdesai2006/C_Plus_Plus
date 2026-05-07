//Que. write a program to reverse the array with out using any extra array.
//Here we will use double pointers
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;  
int main(){
    int n;
    cout<<"Enter the total space of array : ";
    cin>>n;
   vector<int>v1;  
    cout<<"The array is created of value : "<<n<<endl<<"now initalize it ."<<endl;
   int x;
   for(int i=0;i<n;i++){
    cout<<"Enter the value in array at "<<i<<" TH position : ";
    cin>>x;
   v1.push_back(x);
   }
  // int g=0;
  // int h=n-1;
// while(g<=h)
//   { int temp;
//   temp=v1[g];
//   v1[g]=v1[h];
//   v1[h]=temp;
//   g++;
//   h--;
//   }
 
//Using for loop.
// for(int i=0,j=v1.size()-1;i<=j;i++,j--){
//   int temp;
//    temp=v1[i];
//    v1[i]=v1[j];
//   v1[j]=temp;
// }
   //Reverse using inbult function
   reverse(v1.begin(),v1.end());

        cout<<endl<<"The reverse element will be : ";
      for(int k=0;k<n;k++){
    cout<<v1[k]<<" ";
} 
return 0;
}