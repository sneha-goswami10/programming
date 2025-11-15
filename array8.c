#include<stdio.h>
void main()
{
    int a1[5], a2[10],i,j;
    for(i=0; i<5; i++)
    {
        printf("element %d = ",i+1);
        scanf("%d",&a1[i]);
    }
    for(i=0; i<10; i++)
    a2[i] = 0;
    for(i=0; i<5; i++)
    a2[2*i] = a1[i];
    
    for(i=0; i<10; i++)
    printf("%d",a2[i]);
}