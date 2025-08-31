#include <stdio.h>
void main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i = i + 1)
    {
        printf("\n%d", i);
    }
}