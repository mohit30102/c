//9.write a c program to check inputted number is Magic number or not.
#include <stdio.h> 
int main(){
    int n,i, rev=0,sum=0;
    printf("Enter a Number \n");
    scanf("%d",&n);  
    i = n;
    while(i > 0){
        sum += i % 10;  
        i = i / 10;      
    } 
    printf(" \n sum is %d",sum);
    i = sum;
     while( i > 0){
        rev = rev*10 + i % 10; 
        i = i / 10;
    }
    printf(" \n reverse no is %d",rev);
    if(rev*sum == n) 
        printf("\n it is Magic Number \n");
    else
        printf("\n it is Not  Magic Number \n");
 
    return 0;
}
