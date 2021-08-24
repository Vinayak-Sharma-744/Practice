//To sort an array elements
#include <stdio.h>
int main()
{
    int i, sort, a[5], t,n=5;
    printf("Enter any number:");
    //  scanf("%d",&a[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n/2 ; i++)
    {
       //for(int j=0;j<n;j++){
         //  if(a[i]>a[j]){
        
            t = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = t;
           
    }
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
}