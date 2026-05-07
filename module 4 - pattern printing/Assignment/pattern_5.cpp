// Q5. Print the following pattern
// Input: n = 4
// Input: n = 4
// Output:
// *
// **
// ***
// ****
// ***
// **
// *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int nst=1;
    
    for(int i=1;i<=(2*n)-1;i++){
      if(nst>=n-1){
        for(int k=1;k<=nst;k++){
                cout<<"*";
        }
         nst--;
      }
      else{
        for(int j=1;j<=i;j++){
                cout<<"*";    
        }
      nst++;
      }
 
        cout<<endl;
}

   return 0;
}