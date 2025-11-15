#include <stdio.h>

int main() {
    int i, num;
    float sum = 0, mean;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        sum += num;
    }

    mean = sum / 10;

    printf("\nSum  = %.2f", sum);
    printf("\nMean = %.2f\n", mean);

    return 0;
}
