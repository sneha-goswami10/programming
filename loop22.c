#include <stdio.h>

int main() {
    int num, cnt = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        num /= 10;
        cnt++;
    }

    printf("Total digits = %d\n", cnt);
    return 0;
}
