#include<iostream>
using namespace std;
int fact (int x){
  int y=1;
  for(int i=1;i<=x;i++){
    y=y*i;
  }
   return y;
}
int combination(int n,int r){
    int nfact = fact(n);
        int rfact= fact(r);
        int nrfact=fact(n-r);
        int combination_product = nfact/(rfact*nrfact);
        return combination_product;
}
 int  main(){
    int x;
        cout<<"Entert the value of x :";
        cin>>x;
        for(int i=0;i<=x;i++){
            for(int j=0;j<=i;j++){
                cout<<combination(i,j);
            }
            
            cout<<endl;
        }
        return 0;
    }