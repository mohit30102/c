//WAP to Find max. from 5 using ternary operator.//
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter A,B,C,D,E :");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    (a>b)?(a>c)?(a>d)?(a>e)?printf("A is Maximum"):printf("E is Maximum"):
    (d>e)?printf("D is Maximum"):printf("E is Maximum"):
    (c>d)?(c>e)?printf("C is Maximum"):printf("E is Maximum"):
    (d>e)?printf("D is Maximum"):printf("E is Maximum"):
    
    (b>c)?(b>d)?(b>e)?printf("B is Maximum"):printf("E is Maximum"):
    (d>e)?printf("D is Maximum"):printf("E is Maximum"):
    (c>d)?(c>e)?printf("C is Maximum"):printf("E is Maximum"):
    (d>e)?printf("D is Maximum"):printf("E is Maximum");

    return 0;
}