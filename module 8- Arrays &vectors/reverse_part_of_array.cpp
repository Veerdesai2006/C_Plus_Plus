//que. Reverse the part of array.
#include<iostream>
#include<vector>
using namespace std; 
reverse_part(int a , int b, vector<int>& v1){
 while(a<=b)
  {int temp;
   temp=v1[a];
   v1[a]=v1[b];
  v1[b]=temp;
  a++;
 b--;
  }
}
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
  reverse_part(1,3,v1);
        cout<<endl<<"The reverse element will be : ";
      for(int k=0;k<n;k++){
    cout<<v1[k]<<" ";
      } 
return 0;
}