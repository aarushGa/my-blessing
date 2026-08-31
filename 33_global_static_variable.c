#include <stdio.h>

int globalVar = 10;

void demo() {
    static int staticVar = 0;
    staticVar++;
    printf("  Static variable: %d\n", staticVar);
}

int main() {
    int i;

    printf("--- Global Variable ---\n");
    printf("Initial globalVar = %d\n", globalVar);
    globalVar += 5;
    printf("After modification globalVar = %d\n\n", globalVar);

    printf("--- Static Variable (called 3 times) ---\n");
    for (i = 0; i < 3; i++) {
        printf("Call %d:\n", i + 1);
        demo();
    }

    return 0;
}
