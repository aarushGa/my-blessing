#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    int temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }

    if (original == reversed)
        printf("%d is a Palindrome number\n", original);
    else
        printf("%d is not a Palindrome number\n", original);

    return 0;
}
