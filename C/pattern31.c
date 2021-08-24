#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <=9; i++)
    {  i<=5?k++:k--;
    
        for (j = 1; j <= 5; j++)
        {  
            if (j>=k&&j<=5){
                printf("%d",k);
                
                }
            else
                printf(" ");
            
        }
        printf("\n");
    }
}