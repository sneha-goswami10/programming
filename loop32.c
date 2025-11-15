#include <stdio.h>

int main() {
    int n, i, c, count = 0;

    for (n = 1; n <= 500; n++) {
        c = 0;
        for (i = 1; i <= n; i++)
            if (n % i == 0) c++;
        if (c == 2) count++;
    }

    printf("Total primes = %d", count);
    return 0;
}
