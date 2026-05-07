#include<stdio.h>
int fibonacii(int n){
    if(n==1 || n==2){
        return 1;
    }
    int a=fibonacii(n-1);
    int b=fibonacii(n-2);

              return a+b;
}   
int main(){
    int n; 
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
int fibo =fibonacii(n);
      printf("%d  ",fibo);

      return 0;
}