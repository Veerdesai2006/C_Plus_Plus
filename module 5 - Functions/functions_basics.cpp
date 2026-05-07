//for printing the loops muitiple time we use functions 
#include<iostream>
using namespace std;

void star_triangle(int n){
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    star_triangle(1);
    star_triangle(2);
    star_triangle(3);
    star_triangle(4);
    star_triangle(5);
    abs(1.66);
    return 0;
}