//WAP to print sum 1 to N using while loop.
#include<stdio.h>
int main(){

    int i=1,n,sum=0;
    printf("\n enter no.");
    scanf("%d",&n);
    while (i<=n)
    {
        sum+=i;
        i++;

    }
    printf("sum is %d",sum);
    return 0;
    
}