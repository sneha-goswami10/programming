#include <stdio.h>

int main() {
    int i, num;
    int pos = 0, neg = 0, zero = 0;

    printf("Enter 200 numbers:\n");

    for (i = 0; i < 200; i++) {
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
    }

    printf("\nPositive numbers : %d", pos);
    printf("\nNegative numbers : %d", neg);
    printf("\nZeroes          : %d\n", zero);

    return 0;
}
