#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    puts("enter the array: ");
    gets(str1);
    strcpy(str2,str1);
    printf("%s",str2);
}