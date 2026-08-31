#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, newSize;
    int *arr;

    printf("Enter initial size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("malloc failed\n");
        return 1;
    }
    printf("malloc: Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("malloc array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    printf("Enter new size: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));
    if (arr == NULL) {
        printf("realloc failed\n");
        free(arr);
        return 1;
    }
    printf("realloc: Enter %d more elements:\n", newSize - n);
    for (i = n; i < newSize; i++)
        scanf("%d", &arr[i]);

    printf("realloc array: ");
    for (i = 0; i < newSize; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    int *carr = (int *)calloc(newSize, sizeof(int));
    if (carr == NULL) {
        printf("calloc failed\n");
        free(arr);
        return 1;
    }
    printf("calloc array (zero-initialized): ");
    for (i = 0; i < newSize; i++)
        printf("%d ", carr[i]);
    printf("\n\n");

    free(arr);
    free(carr);
    printf("Memory freed successfully\n");

    return 0;
}
