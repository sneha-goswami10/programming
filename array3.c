#include<stdio.h>
void main()
{
    int i,j,t,arr[5];
    printf("enter 5 numbers\n");
    for(int i=0; i<5; i++)
    {
        printf("number = ");
        scanf("%d",&arr[i]);
    }
    for(i=0; i<4; i++)
        for(j=i+1; j<5; j++)
            if(arr[i]<arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        
        for(i=0; i<5; i++)
        printf("%d ",arr[i]);
}    