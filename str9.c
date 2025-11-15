#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100],s2[100];
    printf("enter 1st string: ");
    gets(s1);
    printf("enter 2nd string: ");
    gets(s2);
    strcat(s1,s2);                                                        
    printf("%s",s1);
}