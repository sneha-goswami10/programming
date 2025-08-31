#include<stdio.h>
void main()
{
    int n;
    printf("n= ");
    scanf("%d",&n);
    int a = 0;
    for(int i=1;i<=2*n;i=i+2)
    {
        a=a+i;
    }
    printf("the sum of %d number is %d",n,a);
}