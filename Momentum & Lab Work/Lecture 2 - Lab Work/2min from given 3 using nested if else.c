//WAP to Find min. from given 3 no. using nested if else.//
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d %d %d",&a,&b,&c);

    if (a<b){
            if(a<c){
            printf("A is Minimum");
        }
            else{
            printf("C is Minimum");
        }
    }
    else{
            if(b<c){
            printf("B is Minimum");
        }
            else{
            printf("C is Minimum");
        }
    }    
    return 0;
}