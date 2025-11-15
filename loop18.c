#include <stdio.h>

int main() {
    int i;
    char sex;
    int boys = 0, girls = 0;

    printf("Enter sex code of 50 students (M/F):\n");

    for (i = 0; i < 50; i++) {
        scanf(" %c", &sex);

        if (sex == 'M' || sex == 'm')
            boys++;
        else if (sex == 'F' || sex == 'f')
            girls++;
    }

    printf("\nNumber of Boys  : %d", boys);
    printf("\nNumber of Girls : %d\n", girls);

    return 0;
}
