#include <stdio.h>
int main() {
    int a[10],b[10]={0},i,n,d;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    printf("Enter shift value: ");
    scanf("%d",&n);
    printf("Enter direction (0=left,1=right): ");
    scanf("%d",&d);
    if(d==0)
        for(i=0;i<10-n;i++) b[i]=a[i+n];
    else
        for(i=n;i<10;i++) b[i]=a[i-n];
    for(i=0;i<10;i++) printf("%d ",b[i]);
    return 0;
}
