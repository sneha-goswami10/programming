#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100],s2[100];
    int i,j;
    puts("enter the string: ");
    gets(s1);
    int a = 0;
    int n = strlen(s1);
    for(i=0; i < n/2; i++)
    {
        if(s1[i]!=s1[n - i - 1])
       { a = 1;
        break;}
    }
    if(a==0)
    printf("the string is palandrome");
    else
    printf("the string is not palandrome");
    
}