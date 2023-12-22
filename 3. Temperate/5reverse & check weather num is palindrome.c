//5. Write C program to enter a number and print its reverse & check weather num is palindrome or not?
#include<stdio.h>
int main(){
    int r,n,rev=0,f;
    printf("Enter No:");
    scanf("%d",&n);
    f=n;
    while (n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("\n Reverse No Is %d",rev);
    if (f==rev)
    {
        printf("\n It Is Palindrom");
    }else{
        printf("\n It Is NOT Palindrom");
    } 
    return 0;
}