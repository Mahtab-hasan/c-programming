#include <stdio.h>

int main() {
    int n, i, j, k, space;
    scanf("%d", &n);

    // Upper half of diamond
    for (i = 1; i <= n; i++) {
        space = n - i;
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of diamond
    for (i = n - 1; i >= 1; i--) {
        space = n - i;
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
