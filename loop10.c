#include<stdio.h>
void main()
{
    int n;
    printf("n= ");
    scanf("%d",&n);
    int a = 1;
    for(int i=1;i<=n;i++)
    {
        a = a*i;
    }
    printf("factorial of %d is %d",n,a);
}