#include <stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;

    printf("Enter 9 elements of first matrix:\n");
    for(i=0;i<9;i++)
        scanf("%d", &a[0][i]);

    printf("Enter 9 elements of second matrix:\n");
    for(i=0;i<9;i++)
        scanf("%d", &b[0][i]);

    printf("\nAddition of matrices:\n");
    for(i=0;i<9;i++){
        *(&c[0][0] + i) = *(&a[0][0] + i) + *(&b[0][0] + i);
        printf("%d ", *(&c[0][0] + i));
    }

    printf("\n\nSubtraction of matrices:\n");
    for(i=0;i<9;i++){
        *(&c[0][0] + i) = *(&a[0][0] + i) - *(&b[0][0] + i);
        printf("%d ", *(&c[0][0] + i));
    }

    printf("\n\nMultiplication of matrices:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = 0;
            for(k=0;k<3;k++)
                c[i][j] += a[i][k] * b[k][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
