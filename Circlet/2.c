#include <stdio.h>
int main()
{

    int i, j,k=11;
    for (i=1;i<=5;i++){
        for (j=i;j>=1;j--,k++){           
              printf(" %d",k);
            }
                printf("\n");

    }

    return 0;
}