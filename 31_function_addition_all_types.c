#include <stdio.h>

int addInt(int a, int b) {
    return a + b;
}

float addFloat(float a, float b) {
    return a + b;
}

double addDouble(double a, double b) {
    return a + b;
}

char addChar(char a, char b) {
    return a + b;
}

int main() {
    int ia, ib;
    float fa, fb;
    double da, db;
    char ca, cb;

    printf("--- Integer Addition ---\n");
    printf("Enter two integers: ");
    scanf("%d %d", &ia, &ib);
    printf("Sum = %d\n\n", addInt(ia, ib));

    printf("--- Float Addition ---\n");
    printf("Enter two floats: ");
    scanf("%f %f", &fa, &fb);
    printf("Sum = %.2f\n\n", addFloat(fa, fb));

    printf("--- Double Addition ---\n");
    printf("Enter two doubles: ");
    scanf("%lf %lf", &da, &db);
    printf("Sum = %.2lf\n\n", addDouble(da, db));

    printf("--- Char Addition ---\n");
    printf("Enter two characters: ");
    scanf(" %c %c", &ca, &cb);
    printf("Sum = %d (ASCII)\n", addChar(ca, cb));

    return 0;
}
