#include<stdio.h>
void sumation(int n,int s){
    if(n==0){
        printf("%d",s);
        return ;
    }
    sumation(n-1,s+n);
            return ;
}
int main(){
    int n; 
    printf("Enter the value of n : ");
    scanf("%d",&n);
   sumation(n,0);
    return 0;
}