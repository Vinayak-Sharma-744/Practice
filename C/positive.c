//check whether number is positive or negative
#include <stdio.h>
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    if(num>0){
        printf("positive");

    }
 else if(num<0){
    printf("negative");
}
}