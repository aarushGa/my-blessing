#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, result = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            result = str1[i] - str2[i];
            break;
        }
    }

    if (result == 0 && str1[i] == '\0' && str2[i] == '\0')
        printf("Both strings are Equal\n");
    else if (result == 0)
        result = str1[i] - str2[i];

    if (result > 0)
        printf("\"%s\" is greater than \"%s\"\n", str1, str2);
    else if (result < 0)
        printf("\"%s\" is greater than \"%s\"\n", str2, str1);
    else
        printf("Both strings are Equal\n");

    return 0;
}
