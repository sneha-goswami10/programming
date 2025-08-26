#include<stdio.h>
void main()
{
    int x,y,z,a,b;
    printf("1st number = ");
    scanf("%d",&x);
    printf("2nd number = ");
    scanf("%d",&y);
    printf("\nswaping the numbers");
    z = x + y;
    a = z - x;
    b = z - y;
    printf("\n1st number is = %d",a);
    printf("\n2nd number is = %d",b);
    
}