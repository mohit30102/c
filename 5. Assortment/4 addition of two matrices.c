//4. Write C program to addition of two matrices
#include<stdio.h>
int main(){
    int a[20][20],b[20][20],c[20][20],i,j,m,n;
    printf("Enter size of row and colume::");
    scanf("%d %d",&m,&n);

    printf("Enter elements of 1 metrix:");
    for ( i = 0; i < m; i++){
       for ( j = 0; j < n; j++){
       scanf("%d",&a[i][j] );
       } 
    }
     printf("\n Metrix 1\n");
     for ( i = 0; i < m; i++){
       for ( j = 0; j < n; j++){
       printf("%d ",a[i][j] ); 
       } 
       printf("\n");
    }
    printf("Enter elements 2 elements:");
    for ( i = 0; i < m; i++){
       for ( j = 0; j < n; j++){
       scanf("%d",&b[i][j] );
       } 
    }
     printf("\n Metrix 2\n");
     for ( i = 0; i < m; i++){
       for ( j = 0; j < n; j++){
       printf("%d ",b[i][j] ); 
       } 
       printf("\n");
    }
    
     for ( i = 0; i < m; i++){
       for ( j = 0; j < n; j++){
        c[i][j]=a[i][j]+b[i][j];
       } 
    }
      printf("\n Sum of two matrices: \n");
      for (i = 0; i < m; ++i){
         for (j = 0; j < n; ++j) {
            printf("%d",c[i][j]);
         }
         printf("\n");
      }

    return 0;
}