//To swap numbers using pointers
#include <stdio.h>
void swap(int *);
int main()
{
    int arr[5];
    int i;
    printf("Enter the value of an Array:\n");
    for (i = 0; i <= 4; i++)
        scanf("%d", &arr[i]);
    swap(arr);
}
void swap(int *p)
{
    int i, t, n = 5;
    printf("The Reverse of an Array is\n ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d\n", *(p + i));
    }
}