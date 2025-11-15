#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("lines.txt", "w");

    printf("Enter lines (type STOP to end):\n");

    while (1) {
        gets(line);
        if (strcmp(line, "STOP") == 0)
            break;
        fputs(line, fp);
        fputs("\n", fp);
    }

    fclose(fp);
    return 0;
}
