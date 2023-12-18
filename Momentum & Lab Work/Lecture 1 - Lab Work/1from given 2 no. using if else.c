//WaP to Find min. no. from given 2 no. using if else.//
#include<stdio.h>
int main(){
    int a,b;
    printf("enter a&b :");
    scanf("%d %d",&a,&b);

    if (a<b){
       printf("\n A is Minimum");
    }
    else{
       printf("\n B is Minimum");
    }
    return 0;
} 