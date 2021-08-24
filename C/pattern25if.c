#include <stdio.h>
int main()
{
    int i, j, k = 0, rows, n; //k=1
    printf("Enter the value of rows:");
    scanf("%d", &rows);
    n = (rows + 1) / 2;
    for (i = 1; i <= rows; i++)
    {
        if (rows % 2 == 0)
        {
            if (i <= n)
                k++;
            if (i > n + 1)
                k--;
        }
        else
            i <= n ? k++ : k--;
        for (j = 1; j <= rows; j++)
        {
            if (j >= n + 1 - k && j <= n - 1 + k)
            {
                printf("*");
             // j<4?k++:k--;  k=0; //for space between pyramid
            }
            else
            {
                printf(" ");
               //  k=1;
            }
        }

        printf("\n");
    }
}