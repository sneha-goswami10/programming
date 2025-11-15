#include <stdio.h>

int main() {
    int i, n, num;
    float sum = 0, mean;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("\nEnter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    mean = sum / n;

    printf("\nSum  = %.2f", sum);
    printf("\nMean = %.2f\n", mean);

    return 0;
}
