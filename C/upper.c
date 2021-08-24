//Check whether an alphabet is uppercase,lowercase or special character
#include <stdio.h>
int main(){
    int ch;
    scanf("%d",&ch);
    if(ch>=65 && ch<= 90){
        printf("uppercase");
    }
    else if(ch>=97 && ch<=122){
        printf("lowercase");
        }
        else if (ch>=48 && ch<=57){
            printf("num");
        }
        
            else{
                printf("symbol");
            }
        return 0;
    
}