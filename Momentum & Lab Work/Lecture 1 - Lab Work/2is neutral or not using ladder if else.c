//WAP to Find if a given no. is neutral or not using ladder if else.//
#include<stdio.h>
int main(){
    int number;
    printf("enter your number:");
    scanf("%d",&number);

   
    if (number>0){
       printf("\n Neutral number");
    }
    else if(number<0){
       printf("\n Invalid Number");
    }
    else{
       printf("\n Number is Zero");
    }
    return 0;
}