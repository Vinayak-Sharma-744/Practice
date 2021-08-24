#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            printf("%c ", i + 65); // use k too to print ABCDE in a row and space after %c to print pyramid
        } 
        printf("\n");
    }
}