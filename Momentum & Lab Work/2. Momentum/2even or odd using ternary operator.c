//Write C program to check a number is even or odd using ternary operator.//
#include<stdio.h>
int main(){
    int number;
    printf("\n Enter any Number :");
    scanf("%d",&number);

    (number%2==0)?printf("\n It is Even Number"):printf("\n It is Odd Number");
    return 0;

}