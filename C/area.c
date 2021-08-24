//Area of Circle
#include <stdio.h>
int main(){
    float rad,pi,area;
    printf("Area:");
    scanf("%f%f",&pi,&rad);
    area=pi*rad*rad;
    printf("%0.2f",area); 
}