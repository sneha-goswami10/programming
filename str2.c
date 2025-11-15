#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i;
    puts("enter the string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++){
    if(str[i]<97)
    {
        str[i] = str[i] + 32;
    }}
    printf("%s",str);
}

    
