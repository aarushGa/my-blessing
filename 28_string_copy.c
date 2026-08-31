#include <stdio.h>

int main() {
    char source[100], dest[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", source);

    for (i = 0; source[i] != '\0'; i++)
        dest[i] = source[i];
    dest[i] = '\0';

    printf("Source: %s\n", source);
    printf("Destination: %s\n", dest);

    return 0;
}
