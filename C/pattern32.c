#include <stdio.h>
int main()
{
    int i, j,k=0,x;
    for (i = 1; i <=9; i++)
    {  
    i<=5?k++:k--;
    x=1;
        for (j = 1; j <= 5; j++)
        {  
            if (j>=6-k){
                printf("%d",x); // try with k
                 x++;
                }
            else
                printf(" ");
            
        }
        printf("\n");
    }
}