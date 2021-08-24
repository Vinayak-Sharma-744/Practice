//To check whether character is avowel or consonant
#include <stdio.h>
int main(){
    char char1;
    printf("Enter Alphabet:");
    scanf("%c",&char1);
    if(char1=='a'||char1=='e'||char1=='i'||char1=='o'||char1=='u'){
        printf("vowel");
    }
        else{
            printf("consonant");
        }
    }

