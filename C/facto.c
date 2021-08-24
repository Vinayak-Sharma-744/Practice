//factorial of a number
#include <stdio.h>
int main(){
    int n;
    int fact=1;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    fact*=i;
}
printf("Factorial is %d",fact);
}
