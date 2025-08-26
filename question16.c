#include<stdio.h>
int main()
{
    float p,r,n,i;
    printf("principle =  ");
    scanf("%f",&p);
    printf("rate =  ");
    scanf("%f",&r);
    printf("number of period =  ");
    scanf("%f",&n);
    i = p*r*n/100.0;
    printf("interest is %f",i);

}