//4.WAP to find peform addition of 1D array & store it into another.
#include<stdio.h>
int main(){
    int a[50],i,n,sum=0;
    printf("Enter Array:");
    scanf("%d",&n);
    printf("\n Enter Elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("\n You Have Entered Following Elements \n");
    for ( i = 0; i < n; i++){
        sum=sum+a[i];
        printf("%d \n",a[i]);
    }
     printf("\n Addition Of All Elements Are: %d",sum);
    
    return 0;
}