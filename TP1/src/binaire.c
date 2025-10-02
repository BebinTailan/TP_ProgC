#include <stdio.h>

int main() {
    int numbers[] = {0, 4096, 65536, 65535, 1024};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    for (int i = 0; i < size; i++) {
        printf("%d en binaire: ", numbers[i]);
        
        // Affiche les 32 bits (pour un int standard)
        for (int j = 31; j >= 0; j--) {
            printf("%d", (numbers[i] >> j) & 1);
        }
        printf("\n");
    }
    
    return 0;
}