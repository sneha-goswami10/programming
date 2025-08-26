#include<stdio.h>
void main()
{
    int x,y,z;
    printf("gross sales = ");
    scanf("%d",&x);
    if(x>20000)
    {
        y = x*15/100;
    }
    if(x>10000)
    {
        y = x/10;
    }
    if(x<10000)
    {
        y = x*5/100;
    }
    z = x - y;
    printf("net sales = %d",z);
}