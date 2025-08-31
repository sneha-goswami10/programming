#include<stdio.h>
void main()
{
    int a = 0;
    for(int i=13;i<=100;i=i+13)
    a=a+i;
    printf("The sum of all the numbers divisible by 13 upto 100 is %d",a);

}