#include <stdio.h>

int main() {
    int num, i, c = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
        if (num % i == 0) c++;

    if (c == 2)
        printf("Prime number");
    else
        printf("Not Prime");

    return 0;
}
