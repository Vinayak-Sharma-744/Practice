#include <stdio.h>
int main()
{
    int i, j, k=1;
    for (i = 1; i <=4; i++)
    {  //i<=4?k++:k--;
        for (j = 1; j <= 7 ; j++)
        {
            if (j>=i && j<= 8-i)
                printf("*");
            else
                printf(" ");
            
        }
        printf("\n");
    }
}