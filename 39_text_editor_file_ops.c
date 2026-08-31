#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile() {
    FILE *fp;
    char filename[50], line[256];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error creating file\n");
        return;
    }

    printf("Enter content (type 'END' on a new line to finish):\n");
    getchar();
    while (1) {
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = '\0';
        if (strcmp(line, "END") == 0) break;
        fprintf(fp, "%s\n", line);
    }
    fclose(fp);
    printf("File '%s' created successfully\n\n", filename);
}

void displayFile() {
    FILE *fp;
    char filename[50], line[256];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found\n\n");
        return;
    }

    printf("\n--- File Content ---\n");
    while (fgets(line, sizeof(line), fp))
        printf("%s", line);
    printf("--- End of File ---\n\n");
    fclose(fp);
}

void appendFile() {
    FILE *fp;
    char filename[50], line[256];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("File not found\n\n");
        return;
    }

    printf("Enter content to append (type 'END' to stop):\n");
    getchar();
    while (1) {
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = '\0';
        if (strcmp(line, "END") == 0) break;
        fprintf(fp, "%s\n", line);
    }
    fclose(fp);
    printf("Content appended successfully\n\n");
}

int main() {
    int choice;

    while (1) {
        printf("===== Simple Text Editor =====\n");
        printf("1. Create File\n");
        printf("2. Display File\n");
        printf("3. Append to File\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createFile(); break;
            case 2: displayFile(); break;
            case 3: appendFile(); break;
            case 4: return 0;
            default: printf("Invalid choice\n\n");
        }
    }

    return 0;
}
