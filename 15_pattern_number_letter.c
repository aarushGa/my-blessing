#include <stdio.h>

int main() {
    int i, j, n = 5;
    char ch = 'A';

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("%d ", i);

        for (j = 1; j <= i; j++)
            printf("%c", ch);

        ch++;
        printf("\n");
    }

    return 0;
}
