#include<stdio.h>
void main()
{
    int arr[10];
    printf("enter 10 numbers\n");
    for(int i=0; i<10; i++)
    {
        printf("number = ");
        scanf("%d",&arr[i]);
    }
    printf("4th = %d\n7th = %d\n9th = %d",arr[3],arr[6],arr[8]);

}