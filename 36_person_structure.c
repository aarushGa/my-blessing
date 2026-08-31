#include <stdio.h>

struct person {
    char name[50];
    char dateOfJoining[20];
    float salary;
};

int main() {
    struct person p[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nPerson %d:\n", i + 1);
        printf("  Name: ");
        scanf("%s", p[i].name);
        printf("  Date of Joining (DD/MM/YYYY): ");
        scanf("%s", p[i].dateOfJoining);
        printf("  Salary: ");
        scanf("%f", &p[i].salary);
    }

    printf("\n===== Employee Details =====\n");
    printf("%-15s %-15s %s\n", "Name", "Joining Date", "Salary");
    printf("---------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-15s %-15s %.2f\n", p[i].name, p[i].dateOfJoining, p[i].salary);
    }

    return 0;
}
