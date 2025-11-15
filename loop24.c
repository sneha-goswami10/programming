#include <stdio.h>

int main() {
    int num, rev = 0, d;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        d = num % 10;
        rev = rev * 10 + d;
        num /= 10;
    }

    printf("Reversed number = %d\n", rev);
    return 0;
}
