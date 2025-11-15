#include <stdio.h>

int power(int a, int b) {
    int i, p = 1;
    for(i = 1; i <= b; i++)
        p *= a;
    return p;
}

int main() {
    int x, y;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &y);
    printf("Result = %d", power(x, y));
    return 0;
}
