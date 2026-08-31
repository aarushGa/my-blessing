#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fdata, *fodd, *feven;
    int num;

    fdata = fopen("data.txt", "w");
    if (fdata == NULL) {
        printf("Error creating data file\n");
        return 1;
    }
    printf("Enter integers (enter -1 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == -1) break;
        fprintf(fdata, "%d ", num);
    }
    fclose(fdata);

    fdata = fopen("data.txt", "r");
    fodd = fopen("odd.txt", "w");
    feven = fopen("even.txt", "w");

    if (fdata == NULL || fodd == NULL || feven == NULL) {
        printf("Error opening files\n");
        return 1;
    }

    printf("\nNumbers in data: ");
    while (fscanf(fdata, "%d", &num) != EOF) {
        printf("%d ", num);
        if (num % 2 == 0)
            fprintf(feven, "%d ", num);
        else
            fprintf(fodd, "%d ", num);
    }
    fclose(fdata);
    fclose(fodd);
    fclose(feven);

    fodd = fopen("odd.txt", "r");
    printf("\n\nOdd numbers: ");
    while (fscanf(fodd, "%d", &num) != EOF)
        printf("%d ", num);
    fclose(fodd);

    feven = fopen("even.txt", "r");
    printf("\nEven numbers: ");
    while (fscanf(feven, "%d", &num) != EOF)
        printf("%d ", num);
    fclose(feven);

    printf("\n");

    remove("data.txt");
    remove("odd.txt");
    remove("even.txt");

    return 0;
}
