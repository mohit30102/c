//1. Write C program to check whether a string is palindrome or not. //nayan 
#include<stdio.h>
#include<string.h>
int main(){
     char str[20];
     int i, len, flag = 0;
     printf("Enter Name:");
     gets(str);
     printf("Name is:");
     puts(str);
      len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag){
        printf("%s is not Palindrome", str);
    }
        
    else{
        printf("%s is Palindrome", str);
    }
       return 0;  
        
}