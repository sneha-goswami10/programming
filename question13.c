#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("bytes =  ");
    scanf("%f",&a);
    b = a / 1000.0;
    printf("\nkilobytes = %f",b);
    c = a / 1000000.0;
    printf("\nmegabytes = %f",c);
    d = a / 1000000000.0;
    printf("\ngigabytes = %f",d);
}