#include<stdio.h> 
int main()
{
    int x,y,a,b;
    printf("Side 1 =  ");
    scanf("%d",&x);
    printf("Side 2 =  ");
    scanf("%d",&y);
    a = x*y;
    printf("The area of the rectangle is %d",a);
    b = 2*(x + y);
    printf("\nThe perimeter of the rectangle is %d",b);
}
