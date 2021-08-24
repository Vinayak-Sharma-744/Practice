//To find the GCD or HCF 
#include<stdio.h>
int main(){
    int i,num1,num2,gcd;
    printf("Enter any two numbers:");
    scanf("%d%d",&num1,&num2);
    /*for(i=0;(i<=num1) && (i<=num2);++i){
        if(num1%i==0 && num2%i==0)
            gcd=i;
    }
        printf("%d and %d is %d",num1,num2,gcd);   
    */
    while(num1!=0){
        i=num1;
        num1=num2%num1;
      num2=i;
    }
    gcd=num2;
    printf("GCD is %d",gcd);
}