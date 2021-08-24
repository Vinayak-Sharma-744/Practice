//Prime number or not
#include <stdio.h>
int main()
{
    int i, s;
    int c = 1;
    printf("enter any number:");
    scanf("%d", &s);

    for (i = 2; i <= s / 2; i++)
    {
        if (s % i == 0)
        {
            c = 0;
        }
        else if (c)
        {
            printf("%d", s);
        }
        else
        {
            printf("composite");
        }
    }
}
