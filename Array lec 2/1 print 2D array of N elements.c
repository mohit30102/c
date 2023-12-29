//1.WAP to get & print 2D array of N elements.
#include<stdio.h>
 int main(){
    int a[50][50],i,j,m,n;
    printf("Enter Size of Row and Colume :");
    scanf("%d %d",&m,&n);

    printf("Enter Metrix :");
    for (i = 0; i <m; i++)
    {
        for (j = 0; j <n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }  
     printf("Enter metrix...:");
     for ( i = 0; i < m; i++)
     {
         for (j = 0; j <n; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
     }
     
 }