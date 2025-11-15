#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],r[100];
    int i,j,n;
    printf("enter the string: ");
    gets(str);
    n = strlen(str);
    for(i=0; i<n; i++)
    r[i] = str[n-1-i];
    r[n]='\0';
    printf("%s",r);
}