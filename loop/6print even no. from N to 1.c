//WAP to print Even no. from N to 1 using while loop.
#include<stdio.h>
int main(){

    int i;
    printf("\n enter no.");
    scanf("%d",&i);
    while (i>=1)
    {
        if (i%2==0)
        {
            printf("%d \n",i);
        }
        i--;

    }
    return 0;
    
}