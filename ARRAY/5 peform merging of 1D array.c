//5.WAP to find peform merging of 1D array & store it into another.
#include<stdio.h>
int main(){
    int a[50],b[50],c[50],m,n,i,j=0,total;
    printf("Enter Size Of Array 1:");
    scanf("%d",&m);

    printf("\n Enter Elements::");
    for ( i = 0; i < m; i++){
        scanf("%d",&a[i]);
    }
    
    printf("Enter Size Of Array 2:");
    scanf("%d",&n);

    printf("\n Enter Elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&b[i]);
    }
     total = m+n;
    for ( i = 0; i < m; i++)
    {
        c[i]=a[i];
    }
    for ( i = m ; i < total; i++)
    {
        c[i]=b[j];
        j++;
    }
    for ( i = 0; i < total; i++)
    {
       printf("%d",c[i]);
    }
    
    return 0;
}