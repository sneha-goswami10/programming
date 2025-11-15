#include<stdio.h>
void main()
{
    int arr[5];
    printf("enter 5 numbers\n");
    for(int i=0; i<5; i++)
    {
        printf("number = ");
        scanf("%d",&arr[i]);
    }
    printf("\nnumbers you entered are");
    for(int i=0; i<5; i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}