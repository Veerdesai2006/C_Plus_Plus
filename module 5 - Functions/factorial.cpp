#include<iostream>
using namespace std;
int factorial(int x){
    int fact =1;
    if(x==0){
        return 1;
    }
     fact = x*factorial(x-1);
    return fact;
}
int main(){
   cout<<factorial(4);
    return 0;
}