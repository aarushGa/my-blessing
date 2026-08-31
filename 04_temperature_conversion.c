#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in Centigrade: ");
    scanf("%f", &c);
    f = 1.8 * c + 32;
    printf("%.2f Centigrade = %.2f Fahrenheit\n\n", c, f);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) / 1.8;
    printf("%.2f Fahrenheit = %.2f Centigrade\n", f, c);

    return 0;
}
