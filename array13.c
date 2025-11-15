#include <stdio.h>
int main() {
    int a[10],i,p,x;
    printf("Enter 9 numbers: ");
    for(i=0;i<9;i++) scanf("%d",&a[i]);
    printf("Enter position: ");
    scanf("%d",&p);
    printf("Enter number: ");
    scanf("%d",&x);
    for(i=9;i>p;i--) a[i]=a[i-1];
    a[p]=x;
    for(i=0;i<10;i++) printf("%d ",a[i]);
    return 0;
}
