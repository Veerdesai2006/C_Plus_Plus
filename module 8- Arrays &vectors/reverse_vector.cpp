//que . W A P to copy rhe contents of one vector into another into
   // the revere order.


#include<iostream>
#include<vector>
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
   vector<int>v2(n);
for(int j=0;j<n;j++){
  int f=n-1-j;
 v2[j]=v1[f];
}
        cout<<endl<<"The reverse element will be : ";
      for(int k=0;k<n;k++){
    cout<<v2[k]<<" ";
} 
return 0;
}