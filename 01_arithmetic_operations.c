#include <stdio.h>

int main() {
    int a, b;
    float c, d;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Enter two floats: ");
    scanf("%f %f", &c, &d);

    printf("\n--- Integer Operations ---\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    if (b != 0)
        printf("%d / %d = %d (integer division)\n", a, b, a / b);
    else
        printf("Division by zero not allowed\n");

    printf("\n--- Float Operations ---\n");
    printf("%.2f + %.2f = %.2f\n", c, d, c + d);
    printf("%.2f - %.2f = %.2f\n", c, d, c - d);
    printf("%.2f * %.2f = %.2f\n", c, d, c * d);

    if (d != 0)
        printf("%.2f / %.2f = %.2f\n", c, d, c / d);
    else
        printf("Division by zero not allowed\n");

    printf("\n--- Data Type Sizes ---\n");
    printf("char: %lu byte\n", sizeof(char));
    printf("int: %lu bytes\n", sizeof(int));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));

    return 0;
}
