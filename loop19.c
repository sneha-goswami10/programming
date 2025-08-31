#include<stdio.h>
void main()
{
    int a = 0;
    for(int i=5;i<=100;i=i+5)
    a=a+i;
    printf("The sum of all the numbers divisible by 5 upto 100 is %d",a);

}