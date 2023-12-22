//4. Write C program to find sum of first and last digit of a number.
#include<stdio.h>
int main(){
    int frist,n,count=0,sum=0,last,ans;
    printf("Enter No:");
    scanf("%d",&n);
    last=n%10;
    while (n>0){
        frist=n%10;
        n=n/10;
        sum=sum+frist;
        count++;
    }
    ans=frist+last;
    printf("\n Total Digit = %d",count);
    printf("\n Sum Of Digit= %d", sum);
    printf("\n Sum Of Frist & Last Digit= %d",ans);
    return 0;
}