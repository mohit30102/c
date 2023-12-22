//3. Write C program to count number of digits in a number.
#include<stdio.h>
int main(){
    int r,n,count=0,sum=0;
    printf("Enter No :");
    scanf("%d",&n);
    while (n>0){
        r=n%10;
        n=n/10;
        sum=sum+r;
        count++;
    }
    printf("\n Total Digit = %d",count);
    printf("\n Sum of Digit= %d", sum);
    
   
    
    return 0;
}