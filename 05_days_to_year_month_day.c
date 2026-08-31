#include <stdio.h>

int main() {
    int days, years, months, remaining_days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    remaining_days = days % 365;
    months = remaining_days / 30;
    remaining_days = remaining_days % 30;

    printf("\n%d days = %d Year(s), %d Month(s), %d Day(s)\n", days, years, months, remaining_days);

    return 0;
}
