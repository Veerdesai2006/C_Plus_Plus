#include<iostream>
using namespace std;
int fact (int x){
  int y=1;
  for(int i=1;i<=x;i++){
    y=y*i;
  }
   return y;
}

 int  main(){
        int n,r;
        cout<<"Enter n : ";
        cin>>n;
        cout<<"Enter r : ";
        cin>>r;
        int nfact = fact(n);
        int rfact= fact(r);
        int nrfact=fact(n-r);
        int combination_product = nfact/(rfact*nrfact);
        int permutation_product= nfact/nrfact;
        cout<<"The combination is : "<<combination_product<<endl;
        cout<<"The permutation is  : " <<permutation_product;
        return 0;
    }