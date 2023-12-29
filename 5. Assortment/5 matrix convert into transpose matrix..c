//5. Write C program matrix convert into transpose matrix.
#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n,t[20][20];
    printf("Enter size of row and colume::");
    scanf("%d %d",&m,&n);

    printf("Enter elements:");
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
       scanf("%d",&a[i][j] );
       } 
    } 
    printf("\n Metrix \n");
     for ( i = 0; i < m; i++){
       for ( j = 0; j < n; j++){
        printf("%d ",a[i][j] ); 
       } 
       printf("\n");
    }
    printf("\n Convert into transpose matrix\n");
     for ( i = 0; i < n ;i++){
       for ( j = 0; j < m ; j++){
        printf("%d ",a[j][i] ); 
       } 
       printf("\n");
    }
    return 0;
}