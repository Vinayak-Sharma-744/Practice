#include <stdio.h>
int main()
{
    int i, j, k=1;
    for (i = 1; i <= 7; i++)
    {  i<=4?k++:k--;
        for (j = 1; j <= 4; j++)
        {
            if (j>=1 && j<= 6-k)
                printf("*");
            else
                printf(" ");
            
        }
        printf("\n");
    }
}