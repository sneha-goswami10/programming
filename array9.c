#include<stdio.h>
void main()
{
    int n,j,i,arr[5];
    printf("number of elements: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("element %d\n = ",i+1);
        scanf("%d",&arr[i]);
    }
    for(j=n-1; j>=0; j--)
    {
        printf("%d",arr[j]);
    }
}