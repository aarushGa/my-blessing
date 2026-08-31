#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
        printf("Grade: Distinction\n");
    else if (marks >= 60 && marks <= 79)
        printf("Grade: First Class\n");
    else if (marks >= 40 && marks <= 59)
        printf("Grade: Second Class\n");
    else if (marks >= 0 && marks < 40)
        printf("Grade: Fail\n");
    else
        printf("Invalid marks! Enter marks between 0 and 100.\n");

    return 0;
}
