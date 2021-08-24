#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        k = i; // i<=4?k++:k--;
        for (j = 1; j <= 7; j++)

        {
            if (j >= 5 - k && j <= 3 + k)
            {
                //i<=4?k++:k--;
                printf("%d", k);
                j < 4 ? k++ : k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}