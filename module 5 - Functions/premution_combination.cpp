#include<iostream>
using namespace std;
int combination(int n,int r){
    int a=1,b=1,c=1;
    int f=n-r;
    for(int i=1;i<=n;i++){
            a=a*i;
    }
    for(int j=1;j<=r;j++){
            b=b*j;
    }
    for(int k=1;k<=n-r;k++){
        c=c*k;
    }
    int product = a/(b*c);
    return product;
}
    int permutation(int n,int r){
    int a=1,c=1;
    int f=n-r;
    for(int i=1;i<=n;i++){
            a=a*i;
    }
    for(int k=1;k<=f;k++){
        c=c*k;
    }
    int product = a/c;
    return product;
}


 int  main(){
        cout<<"combination is : "<< combination(15,12)<<endl;
        cout<<"permutation is : "<< permutation(11,2)<<endl;
        return 0;
    }