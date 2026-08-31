#include <stdio.h>

int main() {
    int arr[10], n, i, search, replace, count = 0;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &search);

    printf("Enter number to replace with: ");
    scanf("%d", &replace);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            count++;
            arr[i] = replace;
        }
    }

    printf("'%d' found %d time(s)\n", search, count);
    printf("Modified array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
