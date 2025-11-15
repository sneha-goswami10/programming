#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    puts("enter the string: ");
    scanf("%s",s);
    for(int i=0; s[i]!='\0'; i++)
    {
        printf("%c\n",s[i]);
    }
}