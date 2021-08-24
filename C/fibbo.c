//fibonnaci series
#include <stdio.h>
int main(){
    int n,f,a,b;
    a=0;
    b=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
     printf("%d",a);
     f=a+b;
    a=b;
    b=f;
    
}}