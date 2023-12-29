//3. Write C program to Insert, Delete & Update operations the element into array.
#include<stdio.h>
int main(){
    int a[40],i,n,newval,posi;
    printf("Enter array:");
    scanf("%d",&n);
    printf("\n Enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("\n Old elements \n");
    for ( i = 0; i < n; i++){
        printf("%d  ",a[i]);
    }

     printf("\n Enter a new value:");
     scanf("%d",&newval);
     a[n]=newval;
     n++;

    printf("\n After insert array elements:");
    for ( i = 0; i < n; i++){
    printf("%d ",a[i]);
    }

    n--;
    printf("\n After delete array elements:");
    for ( i = 0; i < n; i++){
    printf("%d ",a[i]);
    }

    printf("\n Enter a position:");
    scanf("%d",&posi);

    printf("\n Enter a new value:");
    scanf("%d",&newval);

    for ( i = 0; i < n; i++){
       if (i==posi){
          a[i]=newval;
        }
    }

    printf("\n After update  array elements:");
    for ( i = 0; i < n; i++){
    printf("%d ",a[i]);
    }
    
    return 0;
}