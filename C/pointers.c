//To print all array elements by pointer
#include <stdio.h>
//void ptr (int,int);
void ptr (int *x,int y){
    
    for(y=0;y<5;y++){
  x++;
    }
}
 int main()
{
    int i, c = 5;
    int a[] = {23, 34, 12, 45, 44};
    int *p;
    ptr(p,i);
    p = a;
    for (i = 0; i < c; i++)
    {
        printf("p[%d]=%d\n", i, *p);
        p++;
    }
} 

