//To print sum of n natural numbers
#include <stdio.h>
int main()
{
    int n, i, sum;
    sum = 0;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("sum of %d natural numbers is %d",n, sum);
    return 0;
}