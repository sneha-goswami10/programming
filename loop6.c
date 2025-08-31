#include <stdio.h>
void main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d", &n);
    
    for (int i = 2; i <= 2*n; i = i + 2)
    {
        printf("\n%d", i);
    }
}