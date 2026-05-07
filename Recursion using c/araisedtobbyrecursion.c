#include<stdio.h>
int power(int n,int a){
    if(a==0){
        return 1;
    }
            return  n*power(n,a-1);
}
int main(){
    int n; 
    printf("Enter the value of base : ");
    scanf("%d",&n);
     int a; 
    printf("Enter the value of power : ");
    scanf("%d",&a);
   int p= power(n,a);
   printf("%d raised to %d is %d",n,a,p);
    return 0;
}