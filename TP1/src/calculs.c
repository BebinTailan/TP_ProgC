#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    
    printf("Entrez num1 op num2: ");
    scanf("%d %c %d", &num1, &op, &num2);
    
    printf("%d %c %d = ", num1, op, num2);
    
    if (op == '+') printf("%d\n", num1 + num2);
    else if (op == '-') printf("%d\n", num1 - num2);
    else if (op == '*') printf("%d\n", num1 * num2);
    else if (op == '/') printf(num2 ? "%d\n" : "Erreur: division par zero\n", num1 / num2);
    else if (op == '%') printf(num2 ? "%d\n" : "Erreur: modulo par zero\n", num1 % num2);
    else if (op == '&') printf("%d\n", num1 & num2);
    else if (op == '|') printf("%d\n", num1 | num2);
    else if (op == '~') printf("%d\n", ~num1);
    else printf("Operateur non reconnu\n");
    
    return 0;
}