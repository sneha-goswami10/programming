#include <stdio.h>

int main() {
    int num, temp, sum = 0, d;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        d = temp % 10;
        sum += d * d * d;
        temp /= 10;
    }

    if (sum == num)
        printf("Armstrong number");
    else
        printf("Not Armstrong");

    return 0;
}
