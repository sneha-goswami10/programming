#include<stdio.h>
void main()
{
    float a,b,c,d;
    printf("gross salary = ");
    scanf("%f",&a);
    b = a/10.0;
    c = a*3.0/100.0;
    d = a + b - c;
    printf("net salary is %f",d);
}