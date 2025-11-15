#include <stdio.h>
#include <string.h>

int main() {
    char name[100], *p;
    int i, len;

    printf("Enter full name:\n");
    fgets(name, 100, stdin);

    len = strlen(name);
    p = name;

    printf("\nAbbreviated name:\n");
    printf("%c. ", *p);

    for(i=1;i<len;i++)
        if(*(p+i)==' ')
            printf("%c. ", *(p+i+1));

    p = strrchr(name, ' ');
    printf("%s", p+1);

    return 0;
}
