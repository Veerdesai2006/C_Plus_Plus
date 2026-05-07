//Que. Rotate the given array a by k steps where k is non negative .
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
   int k;
   cout<<"Enter the value of K : ";
   cin>>k;
   if(k>n){
   k=k%n;
   reverse_part(0,n-k-1,v1);
   reverse_part(n-k,n-1,v1);
   reverse_part(0,n-1,v1); 
  }
   else{
   reverse_part(0,n-k-1,v1);
   reverse_part(n-k,n-1,v1);
   reverse_part(0,n-1,v1);
   }
   cout<<endl<<"The reverse element will be : ";
   for(int e=0;e<n;e++){
 cout<<v1[e]<<" ";
   }  
       
   
return 0;
}