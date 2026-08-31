#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i * i;
        if (i < n)
            printf("%d^2 + ", i);
        else
            printf("%d^2", i);
    }

    printf(" = %d\n", sum);

    return 0;
}
