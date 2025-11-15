#include <stdio.h>

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("Inside function: a=%d b=%d\n", a, b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    swap(x, y);
    printf("Outside function: a=%d b=%d", x, y);
    return 0;
}
