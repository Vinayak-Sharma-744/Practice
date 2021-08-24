#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c",i+65);
        }
       /* for (k = 1; k <= i; k++)
        {
            printf("%d",j);
        }*/
        printf("\n");
    }
}