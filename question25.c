#include<stdio.h>
void main()
{
    int x,y;
    printf("emter the 1st number ");
    scanf("%d",&x);
    printf("enter the 2nd number ");
    scanf("%d",&y);
    if(x>y){
         printf("largest = %d",x);
         printf("\nsmallest = %d",y);}

if(y>x){ printf("largest = %d",y);
         printf("\nsmallest = %d",x);}
}