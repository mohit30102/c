//Write C program to input any character and check whether it is alphabet, digit or special character.//
#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);

    if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
       printf("it is alphabet");
    }
    else if(ch>='0' && ch<='9'){
       printf("it is digit");
    }
    else{
       printf("it is special character");
    }
    return 0;

}