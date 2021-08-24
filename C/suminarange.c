//Sum of numbers in a given range
#include <stdio.h>
int main(){
    int s,e,i,sum;
    sum=0;
    scanf("%d",&s);
    scanf("%d",&e);
    for(i=s;i<=e;i++){
        sum+=i;


    }
    printf("%d",sum);
}