#include <stdio.h>

int main() {
    int num, temp, rev = 0, d;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        d = temp % 10;
        rev = rev * 10 + d;
        temp /= 10;
    }

    if (rev == num)
        printf("Palindrome number");
    else
        printf("Not a palindrome");

    return 0;
}
