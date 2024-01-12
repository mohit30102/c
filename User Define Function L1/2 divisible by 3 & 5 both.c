//2.WAP to find if a given nunmber is divisible by 3 & 5 both or not using UDF.
#include<stdio.h>
void cube(int number);

void main(){
    int number;
    printf("enetr no : ");
    scanf("%d",&number);
    cube(number);
    
}

void cube(int number){
   
    if (number % 3 == 0 && number % 5 == 0){
        printf("number is divisible by 3 & 5 ");
    } else{
        printf("number is not divisible by 3 & 5 ");
    }
};
