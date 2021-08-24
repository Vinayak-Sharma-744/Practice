#include <stdio.h>
//#include <conio.h>
int main(void)
{
  //int reverse();

//int reverse(int i,int a[i])

    int i, n =5 , t;
    int a[5];
    printf("Enter any number:");
    for (i = 0; i <n; i++)
    
        scanf("%d ", &a[i]);

        for (i = 0; i <n /2; i++)
        {
            t = a[i];
            a[i] = a[n/2-1];
            a[n/2-1] = t;
        
        }

for (i = 0; i<n; i++)
    printf(" %d \t",a[i]);

return 0;
}