#include<stdio.h>
void main()
{
    int x,y,z,a,b;
    printf("physics = ");
    scanf("%d",&x);
    printf("maths = ");
    scanf("%d",&y);
    printf("computer = ");
    scanf("%d",&z);
    b = x + y + z;
    printf("total = %d",b);
    a = b/3;
    printf("\naverage = %d",a);
    printf("\n");
    if(a>=70 && a<!35)
    {
        printf("distinction");
    }
    if(a>=60 && a<70 && a<!35)
    {
        printf("first class");
    }
    if(a>=50 && a<60 && a<!35)
    {
        printf("second class");
    }
    if(a>=35 && a<50 && a<!35)
    {
        printf("third class");
    }
    if(a<35 || x<35 || y<35 || z<35)
    {
        printf("fail");
    }
}
