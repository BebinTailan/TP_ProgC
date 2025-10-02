#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = " World!";
    char copie[50];
    char concat[100];

    int i = 0, j = 0, len = 0;

    while (str1[len] != '\0') {
        len++;
    }
    printf("Longueur de str1 : %d\n", len);

    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';
    printf("Copie : %s\n", copie);

    i = 0;
    while (str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0';
    printf("Concaténation : %s\n", concat);

    return 0;
}
