#include <stdio.h>

int main() {
    int i, j, n = 4;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf("  ");

        for (j = 1; j <= i; j++)
            printf("%d   ", j);

        printf("\n");
    }

    return 0;
}
