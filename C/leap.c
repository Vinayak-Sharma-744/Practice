//check the leap year
#include <stdio.h>
int main(){
    int l;
    scanf("%d",&l);
    if((l%4==0) && (l%100!=0) || (l%400==0)){
        printf("leap year");}
        else {
   printf("not a leap year");
        }
    }
