//2. Write C program to print multiplication table of any number.
#include<stdio.h>
int main(){
    int i=1,n, mult;
    printf("enter no:");
    scanf("%d",&n);
    for(;i<=10;i++)
    {
        mult=n*i;
        printf("\n %d*%d=%d",n,i,mult);
    }
    
    
    return 0;
}