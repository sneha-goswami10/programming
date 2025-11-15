#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, words = 0, chars = 0, spaces = 0;

    fp = fopen("text.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened!\n");
        exit(0);
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == ' ')
            spaces++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n')
            words++;
    }
    fclose(fp);

    printf("\nCharacters : %d", chars);
    printf("\nWords      : %d", words + 1);
    printf("\nLines      : %d", lines + 1);
    printf("\nSpaces     : %d\n", spaces);

    return 0;
}
