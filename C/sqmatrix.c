//print the square matrix
#include<stdio.h>
int main(){
    int arr[2][2];
    int i,j;
    printf("Enter the value ");
    for(i=0;i<=1;i++)
    for(j=0;j<=1;j++)
    
    scanf("%d",&arr[i][j]); 
    
    for(i=0;i<=1;i++){
    for(j=0;j<=1;j++)
    // scanf("%d%d",&arr[i][j]);
    
    printf("%d\t",arr[i][j]);
    printf("\n");
}}