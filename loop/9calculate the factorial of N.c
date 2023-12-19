//WAP to calculate the factorial of N. using while loop.
#include<stdio.h>
int main(){

    int i=1,n,f=1;
    printf("\n enter no.");
    scanf("%d",&n);
    while (i<=n)
    {
        f*=i;
        i++;

    }
    printf("Factorial is %d",f);
    return 0;
    
}