//WAP to Find max. from 3 using ternary operator.//
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter A,B,C :");
    scanf("%d %d %d",&a,&b,&c);

    (a>b)?(a>c)?printf("A is Maximum"):printf("C is Maximum"):
    (b>c)?printf("B is Maximum"):printf("C is Maximum");

    return 0;
}