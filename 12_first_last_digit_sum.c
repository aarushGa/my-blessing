#include <stdio.h>

int main() {
    int num, first, last, sum;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    temp = num;
    while (temp >= 10) {
        temp /= 10;
    }
    first = temp;

    sum = first + last;

    printf("Number      = %d\n", num);
    printf("First digit = %d\n", first);
    printf("Last digit  = %d\n", last);
    printf("Sum of first and last digit = %d\n", sum);

    return 0;
}
