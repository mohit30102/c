//2. Write C program to find  largest number in array.
#include<stdio.h>
int main(){
    int a[40],i,n,largest;
    printf("Enter array:");
    scanf("%d",&n);
    printf("\n Enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    largest = a[0];

    for(i = 1; i < n; i++) {
      if( largest < a[i] ) 
         largest = a[i];
   }
   printf("Largest number of array %d",largest);

    
    
    return 0;
}