#include<stdio.h>
void main()
{
    int x,y,z;
    printf("enter the 1st number ");
    scanf("%d",&x);
    printf("enter the 2nd number ");
    scanf("%d",&y);
    printf("enter the 3rd number ");
    scanf("%d",&z);
    if(x>y && x>z){
     printf("largest = %d",x);}

    if(y>x && y>z){
     printf("largest = %d",y);}

    if(z>x && z>y){
     printf("largest = %d",z);}

    if(x<y && x<z)
    {
        printf("\nsmallest = %d",x);
    }

    if(y<x && y<z)
    {
        printf("\nsmallest = %d",y);
    }

    if(z<y && z<x)
    {
        printf("\nsmallest = %d",z);
    }

}