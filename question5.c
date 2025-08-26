#include<stdio.h>
int main()
{
    float x,y,a,b,c,d;
    printf("Enter the first number  ");
    scanf("%f",&x);
    printf("Enter the second number  \n");
    scanf("%f",&y);
    printf("The sum of the given number is ");
    a = x + y;
    printf("%f\n",a);
     printf("The substraction of the given number is ");
    b = x - y;
    printf("%f\n",b);
     printf("The multiplication of the given number is ");
    c = x * y;
    printf("%f\n",c);
     printf("The division of the given number is ");
    d = x / y;
    printf("%f\n",d);
    return 0;
}