#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (2 variables): a = %d, b = %d\n", a, b);

    printf("\nEnter two numbers again: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;
    printf("After swapping (3 variables): a = %d, b = %d\n", a, b);

    return 0;
}
