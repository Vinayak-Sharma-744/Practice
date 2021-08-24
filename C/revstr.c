// To reverse a string using pointer
#include<stdio.h>
//#include<stdlib.h>
#include<string.h>
void reverse(char*);
void rev(char s[]){
    for(int i= strlen(s);i>=0;i--){
       printf("%c",s[i]);
    }
}
int main(){
  
     char str[100];
     printf("Enter any String ");
     gets(str);
     reverse(str);
    rev(str);
}
void reverse(char *p){
    int i,j=0;
    for(i=0;*(p+i)!='\0';i++){
       j++;
   }
    for(i=j-1;i>=0;i--){

    printf("%c",*(p+i));
}}