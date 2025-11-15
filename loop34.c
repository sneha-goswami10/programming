#include <stdio.h>

int main() {
    int n, a = 1, b = 1, c, i;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
