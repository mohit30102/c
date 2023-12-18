//WAP to Find Min. from given 5 no. using nested if else.//
#include<stdio.h>
int main(){
    
    int a,b,c,d,e;
    printf("enter a,b,c,d,e");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if (a<b){
        if (a<c){
            if (a<d){
                if (a<e){
                    printf("a is Minimum");
                }
                else{
                    printf("e is Minimum");
                }
            }
            else{
                if(d<e){
                    printf("d is Minimum");
                }
                else{
                    printf("e is Minimum");
                }
            }   
        }
        else{
            if(c<d){
                if(c<e){
                    printf("c is Minimum");
                }
                else{
                    printf("e is Minimum");               
                } 
            }   
            else{
                if(d<e){
                    printf("d is Minimum");
                }
                else{
                    printf("e is Minimum");
                }
            }
        } 
    }
    
    else{
        if(b<c){  
            if (b<d){ 
                if (b<e){
                    printf("b is Minimum");                
                }
                 else{
                    printf("e is Minimum");
                 }
            } 
            else{
                if(d<e){
                    printf("d is Minimum");                
                }
                 else{
                    printf("e is Minimum");
                 }
            } 
        }
        else{
            if(c<d){
                if(c<e){
                    printf("c is Minimum");
                }
                else{
                    printf("e is Minimum");               
                } 
            }   
            else{
                if(d<e){
                    printf("d is Minimum");
                }
                else{
                    printf("e is Minimum");
                }
            }
        } 
    }
    return 0;
}