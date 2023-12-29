//1. Write C program to print all negative elements in an array.
#include<stdio.h>
int main(){
    int a[40],i,n;
    printf("Enter array:");
    scanf("%d",&n);
    printf("\n Enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("\n Print all negative elements  \n");
    for ( i = 0; i < n; i++){
        if (a[i]<0)
        {
            printf("%d \n",a[i]);
        }
        
    }
    
    return 0;
}