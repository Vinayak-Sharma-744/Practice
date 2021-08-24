#include <stdio.h>
int main()
{
    int i, j, k,z=0;
    for (i = 4; i >= 0; i--)
    {
        for (j = 0; j <= i; j++) // try changing in decreasing order
        {
            printf(" ");
        }
       for (k = 0; k <= z; k++)
        {
            printf("%c",i+65); // use i too to print ABCDE in a row and space after %c to print pyramid
        }z+=2; //for pyramid without space
        printf("\n");
    }
}