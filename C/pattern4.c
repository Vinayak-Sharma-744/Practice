#include <stdio.h>
int main()
{
    int i, j, k,z=1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= z; k++)
        {
            printf("*");
        }
        z+=2; // without space pyramid
        printf("\n");
    }
}