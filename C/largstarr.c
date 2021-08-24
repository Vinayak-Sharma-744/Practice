//To check the largest and smallest element in an array
#include <stdio.h>
int main(){
    int arr[5];
    int i,c=arr[0],l=arr[0];
    printf("Enter any value ");
    for(i=1;i<=5;i++)
   scanf("%d",&arr[i]);
    for(i=1;i<=5;i++){
        if(arr[i]>l) 
        l=arr[i];
       else if(arr[i]<c)
        c=arr[i];
       // printf("%d",arr[i]);
    }
printf("the greatest element in an array is %d\n",l);
printf("the smallest element in an array is %d",c);  
}