#include <stdio.h>

int main() {
    int a[3][3], *p, i, big, small;

    printf("Enter 9 elements of 3x3 matrix:\n");
    for(i=0;i<9;i++)
        scanf("%d", &a[0][i]);

    p = &a[0][0];
    big = small = *p;

    for(i=0;i<9;i++){
        if(*(p+i) > big) big = *(p+i);
        if(*(p+i) < small) small = *(p+i);
    }

    printf("\nLargest number = %d\nSmallest number = %d", big, small);
    return 0;
}
