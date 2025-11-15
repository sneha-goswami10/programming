#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int a=0,e=0,i=0,o=0,u=0,j;
    printf("enter the string: ");
    gets(str);
    for(j=0; str[j]!='\0'; j++)
    if(str[j] == 'a')
    a = a+1;
    for(j=0; str[j]!='\0'; j++)
    if(str[j] == 'e')
    e = e+1;
    for(j=0; str[j]!='\0'; j++)
    if(str[j] == 'i')
    i = i+1;
    for(j=0; str[j]!='\0'; j++)
    if(str[j] == 'o')
    o = o+1;
    for(j=0; str[j]!='\0'; j++)
    if(str[j] == 'u')
    u = u+1;
    printf("a = %d\ne = %d\ni = %d\no = %d\nu = %d",a,e,i,o,u);
}