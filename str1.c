#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    puts("enter the string: ");
    gets(str);
    int i = 0;
    int a = 0;
    while(str[i] != '\0')
    {
        a = a+1;
        i++;
    }
    printf("the size of array is: %d",a);

}