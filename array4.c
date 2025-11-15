#include <stdio.h>
int main() {
    int n,a[]={500,200,100,50,20,10,5,2,1},i,c,t=0;
    printf("Enter the amount: ");
    scanf("%d",&n);
    for(i=0;i<9;i++){
        c=n/a[i];
        t+=c;
        n%=a[i];
    }
    printf("Minimum notes required = %d",t);
    return 0;
}
