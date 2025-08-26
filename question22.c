#include<stdio.h>
void main()
{
    float x,y;
    printf("The gross salary is ");
    scanf("%f",&x);
    y = x - x/10.0;
    printf("The net salary is %f",y);
}