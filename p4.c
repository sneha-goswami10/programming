#include <stdio.h>

int main() {
    char books[3][50], *p[3];
    int i;

    printf("Enter 3 book names:\n");
    for(i=0;i<3;i++){
        scanf(" %[^\n]", books[i]);
        p[i] = books[i];
    }

    printf("\nBook names stored are:\n");
    for(i=0;i<3;i++)
        printf("%s\n", p[i]);

    return 0;
}
