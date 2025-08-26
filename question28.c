#include<stdio.h>
void main()
{
    int x;
    printf("enter the number ");
    scanf("%d",&x);
    if(x%7==0)
    {
        printf("number is divisible by 7");
    }
    else
    {printf("number is not divisible by 7");}
}