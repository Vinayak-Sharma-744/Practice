#include <stdio.h>
int main()
{
    int i, j, k; //k=1  
    for (i = 1; i <= 4; i++)
    {  k=0;
        for (j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                printf("%c",k+65 );
               j<4?k++:k--; // k=0; for space between pyramid
            }
            else
            {
                printf(" ");
                // k=1;
            }
        }
        printf("\n");
    }
}