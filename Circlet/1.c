#include <stdio.h>
int main()
{

    int i, j;
    for (i = 41; i <= 45; i++)
    {

        for (j = 41; j <= i; j++)
        {
            if (j<=i)
            {
                printf(" %d", j);
            }

        }
                printf("\n");

    }

    return 0;
}