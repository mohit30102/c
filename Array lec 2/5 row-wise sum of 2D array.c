//5.WAP to perform row-wise sum of 2D array.
#include<stdio.h>
int main(){
    int a[40],i,n;
    printf("enter array:");
    scanf("%d",&n);
    printf("\n enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("\n print all negative elements in an array  :\n");
    for ( i = 0; i < n; i++){
        if (a[i]<0)
        {
            printf("%d \n",a[i]);
        }
        
    }
    return 0;
}