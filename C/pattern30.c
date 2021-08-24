#include <stdio.h>
int main()
{
    int i, j, k=1;
    for (i = 0; i <=6; i++)
    {  //i<=6?k++:k--;
    k=6-i;
        for (j = 0; j <= 6; j++)
        {  
            if (j>=0&&j<=6-i){
                printf("%d",k);
                k--;
                }
            else
                printf(" ");
            
        }
        printf("\n");
    }
}