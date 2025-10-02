#include <stdio.h>

int main() {
    int n = 7;
    int u0 = 0, u1 = 1, u;
    int i;

    printf("%d %d ", u0, u1);

    for (i = 2; i <= n; i++) {
        u = u0 + u1;
        printf("%d ", u);
        u0 = u1;
        u1 = u;
    }

    printf("\n");
    return 0;
}
