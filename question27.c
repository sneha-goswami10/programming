#include<stdio.h>
void main()
{
    float n,g,a,d;
    printf("gross salary = ");
    scanf("%f",&g);
    
    if(g>10000)
    {
        a = g/10;
        d = g*3/100;
    }
    if(g>5000)
    {
        a = g*7/100;
        d = g*2/100;
    }
    n = g + a - d;
    printf("net salary is %f",n);

}