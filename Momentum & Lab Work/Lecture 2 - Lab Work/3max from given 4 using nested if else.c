//WAP to Find max. from given 4 no. using nested if else.//
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter a,b,c,d :");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    
    if (a>b){
        if(a>c){
            if(a>d){
                printf("A is Minimum");
            }
            else{
                printf("D is Minimum");
            }
        }
        else{
            if(c>d){
                printf("C is Minimum");
            }
            else{
                printf("D is Minimum");
            }
        }
    }
    else{ 
         if(b>c){
            if(b>d){
                printf("B is Minimum");
            }
            else{
                printf("D is Minimum");
            }
        }
        else{
             if(c>d){
                printf("C is Minimum");

            }else{
                printf("D is Minimum");
            }
        }  
    }
    
       return 0;
}