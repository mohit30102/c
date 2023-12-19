//WAP to Find leap year from 2000 to 3000 using while loop.
#include<stdio.h>
int main(){

    int i=2000;
    while (i<=3000)
    {
        if (i%4==0)
        {
            printf("%d \n",i);
        }
        
        i++;

    }
    return 0;
    
}