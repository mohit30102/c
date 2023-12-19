//WAP to print thr multiplication table of N using while loop.
#include<stdio.h>
int main(){

    int i=1,n;
    printf("\n enter no.");
    scanf("%d",&n);
    while (i<=10)
    { 
         printf(" \n %d * %d %d",n,i,n*i);
        
        i++;
    }
   
   
    return 0;
    
}