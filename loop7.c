#include<stdio.h>
void main()
{
    int n;
    printf("n= ");
    scanf("%d",&n);
    int a = 0;
    for(int i=1;i<=n;i++)
    {
        a=a+i;
    }
    printf("the sum of %d number is %d",n,a);
}