#include <stdio.h>

int main() {
    int num, sq, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    sq = num * num;
    temp = num;

    while (num > 0) {
        if (num % 10 != sq % 10) break;
        num /= 10;
        sq /= 10;
    }

    if (num == 0)
        printf("Automorphic");
    else
        printf("Not Automorphic");

    return 0;
}
