#include <stdio.h>
#include <string.h>

struct cricket {
    char playerName[50];
    char teamName[50];
    float battingAvg;
};

int main() {
    struct cricket player[50];
    int n, i, j;

    printf("Enter number of players (max 50): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("  Name: ");
        scanf("%s", player[i].playerName);
        printf("  Team: ");
        scanf("%s", player[i].teamName);
        printf("  Batting Average: ");
        scanf("%f", &player[i].battingAvg);
    }

    struct cricket temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (strcmp(player[j].teamName, player[j + 1].teamName) > 0) {
                temp = player[j];
                player[j] = player[j + 1];
                player[j + 1] = temp;
            }
        }
    }

    printf("\n===== Team-Wise Player List =====\n");
    char currentTeam[50] = "";
    for (i = 0; i < n; i++) {
        if (strcmp(currentTeam, player[i].teamName) != 0) {
            strcpy(currentTeam, player[i].teamName);
            printf("\nTeam: %s\n", currentTeam);
            printf("%-20s %s\n", "Player", "Batting Avg");
            printf("----------------------------------------\n");
        }
        printf("%-20s %.2f\n", player[i].playerName, player[i].battingAvg);
    }

    return 0;
}
