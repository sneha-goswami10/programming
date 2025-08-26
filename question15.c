#include<stdio.h>
int main()
{
    float x,y;
    printf("fahrenheit =  ");
    scanf("%f",&x);
    y = (x-32)*5/9;
    printf("\ncelsius = %f",y);
}