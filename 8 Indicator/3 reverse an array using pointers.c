//3. C program to reverse an array using pointers
#include<stdio.h>
int main(){                           
    int a[20],n,i,*ptr;
    printf("Enter array of size = ");
    scanf("%d",&n);

    printf("Enter array element \n");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    ptr=&a[n-1];

    printf("Entered array element = \n");
      for ( i = 0; i < n; i++){
        printf("%d ",*ptr--);
    }
    
return 0;
}