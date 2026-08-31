#include <stdio.h>

int main() {
    float p, r, n, i;

    printf("Enter Principal amount: ");
    scanf("%f", &p);

    printf("Enter Rate of interest: ");
    scanf("%f", &r);

    printf("Enter Number of years: ");
    scanf("%f", &n);

    i = (p * r * n) / 100;

    printf("\nPrincipal = %.2f\n", p);
    printf("Rate     = %.2f\n", r);
    printf("Years    = %.2f\n", n);
    printf("Simple Interest = %.2f\n", i);

    return 0;
}
