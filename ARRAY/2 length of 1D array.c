//2.WAP to find length of 1D array.
#include<stdio.h>
int main(){
    int a[50],i,n,count=0;
    printf("Enter Array:");
    scanf("%d",&n);
    printf("\n Enter Elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++){
        count++;
    }
    printf("count is %d",count);
    
    return 0;
}