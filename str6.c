#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int a;
    printf("enter the first string : ");
    gets(str1);
    printf("enter the second string : ");
    gets(str2);
    a = strcmp(str1,str2);
    if(a == 0)
    {printf("both are same");}
    else {if(a > 0)
    {printf("1st is greater");}
    else
    {printf("2nd is greater");}}
}             