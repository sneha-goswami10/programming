#include <stdio.h>

int main() {
    FILE *fp;
    int roll;
    char name[50];
    char choice;

    fp = fopen("students.csv", "w");

    fprintf(fp, "Roll,Name\n");   // CSV headers

    while (1) {
        printf("\nEnter Roll Number: ");
        scanf("%d", &roll);

        printf("Enter Name: ");
        scanf("%s", name);

        fprintf(fp, "%d,%s\n", roll, name);

        printf("Add another record? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N')
            break;
    }

    fclose(fp);
    printf("\nRecords saved in students.csv\n");
    return 0;
}
