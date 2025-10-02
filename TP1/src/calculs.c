#include <stdio.h>

int main(void) {
    int a = 16;
    int b = 3;
    printf("Addition : %d\n", a + b);
    printf("Soustraction : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division : %d\n", a / b);
    printf("Modulo (reste division de a par b) : %d\n", a % b);
    printf("a est-il egal a b : %d\n", a == b);       
    printf("a est-il superieur a b : %d\n", a > b);  

    return 0;
}

