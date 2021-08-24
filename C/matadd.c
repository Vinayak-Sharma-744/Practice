 #include <stdio.h>
    int main(void) {
    unsigned char MyCharA=179, MyCharB=58;
    printf("%lu\n", sizeof(char));
    printf("(MyCharA & MycharB) = (%d & %d)", MyCharA, MyCharB);
    printf("= %x in hexadecimal and = %d in decimal\n", \
    MyCharA & MyCharB, MyCharA & MyCharB);
    printf("(MyCharA | MycharB) = (%d | %d)", MyCharA, MyCharB);
    printf("= %x in hexadecimal and = %d in decimal\n", \
    MyCharA | MyCharB, MyCharA | MyCharB);
    printf("(MyCharA ^ MycharB) = (%d ^ %d)", MyCharA, MyCharB);
    printf("= %x in hexadecimal and = %d in decimal\n", \ 
    MyCharA ^ MyCharB, MyCharA ^ MyCharB);
    printf("(~MyCharA ) = (~%d)", MyCharA);
    printf("= %x in hexadecimal and = %d in decimal\n", ~MyCharA, ~MyCharA);
    printf("(MyCharA>>1 ) = (%d>>1)", MyCharA);
    printf("= %x in hexadecimal and = %d in decimal\n", MyCharA>>1, MyCharA>>1);
    printf("(MyCharA<<2 ) = (%d<<2)", MyCharA);
    printf("= %x in hexadecimal and = %d in decimal\n", MyCharA<<2, MyCharA<<2);
    return 0;
}



