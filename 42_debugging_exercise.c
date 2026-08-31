#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, n;
    float average;
    int *arr;

    int sum;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr[i]);
    }

    for (i = 0; i <= n; i++) {
        sum += arr[i];
    }

    average = sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %d\n", average);

    int a = 10, b = 0;
    int result = a / b;
    printf("10 / 0 = %d\n", result);

    return 0;
}
