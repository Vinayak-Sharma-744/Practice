#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 4; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c",j+97); //use i too to print EEEE..
        }
       /* for (k = 1; k <= i; k++)
        {
            printf("%d",j);
        }*/
        printf("\n");
    }
}