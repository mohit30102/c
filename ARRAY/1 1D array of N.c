//1.WAP to get & print 1D array of N elements.
#include<stdio.h>
int main(){
    int a[50],i,n;
    printf("Enter ARRAY:");
    scanf("%d",&n);
    printf("\n Enter Elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("\n You Have Entered Following Elements \n");
    for ( i = 0; i < n; i++){
        printf("%d \n",a[i]);
    }
    
    return 0;
}