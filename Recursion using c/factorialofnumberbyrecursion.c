#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
return n*factorial(n-1);
}
int main(){
    int n; 
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("The factorial of entered number is %d",fact);
    return 0;
}