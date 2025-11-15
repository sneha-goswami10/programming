#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100],s2[100];
    int i,n;
    printf("enter the string: ");
    gets(s1);
    n = strlen(s1);
    for(i=0; i<n; i++)
    s2[i] = s1[n-1-i];
    s2[n]='\0';
    for(int i=0; s2[i]!='\0'; i++)
    {
        printf("%c\n",s2[i]);
    }
}