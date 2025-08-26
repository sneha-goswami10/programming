#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("physics = ");
    scanf("%d",&a);
    printf("maths = ");
    scanf("%d",&b);
    printf("chemistry = ");
    scanf("%d",&c);
    d = a + b + c;
    e = d/3;
    printf("Total is %d",d);
    printf("\nThe average is %d",e);
}