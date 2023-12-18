//Write C program to find out max from 4 numbers using nested if.//
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter a,b,c,d :");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    
    if (a>b){
        if(a>c){
            if(a>d){
                printf("A is max");
            }
            else{
                printf("D is max");
            }
        }
        else{
            if(c>d){
                printf("C is max");
            }
            else{
                printf("D is max");
            }
        }
    }
    else{ 
         if(b>c){
            if(b>d){
                printf("B is max");
            }
            else{
                printf("D is max");
            }
        }
        else{
             if(c>d){
                printf("C is max");

            }else{
                printf("D is max");
            }
        }  
    }
    
       return 0;
}