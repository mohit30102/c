//3.WAP to find average of 1D array.
#include<stdio.h>
int main(){
    int a[50],i,n,sum=0;
    float avr;
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
    avr=(float)sum/i;
     printf("\n Addition of all elements are: %d",sum);
    printf("\n Avarage of all elements are: %.2f",avr);
    
    return 0;
}