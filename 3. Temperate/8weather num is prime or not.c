//8. Program Check weather num is prime or not
#include <stdio.h>
int main(){
  int i = 1, n, count;
  printf("Enter No : ");
  scanf("%d", &n);
  for ( i = 1; i < n; i++)
  {
    if (n%i==0)
    {
      count++;
    }
    
  }
  
  if (count <= 2){
    printf("\n It Is Prime Number");
  }else{
    printf("It Is NOT Prime Number");
  }
  return 0;
}