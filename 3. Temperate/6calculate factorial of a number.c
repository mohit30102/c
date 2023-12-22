//6. Write C program to calculate factorial of a number.
#include<stdio.h>
int main(){
    int i=1,n,fact=1;
    printf("Enter no :");
    scanf("%d",&n);
      while(i<=n){
        fact = fact*i;
        i++;
    }
    printf(" \n Factorial is %d",fact);
    
    return 0;
}