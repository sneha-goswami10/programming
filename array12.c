#include <stdio.h>
int main() {
    int a[10],i,x;
    printf("Enter 9 numbers: ");
    for(i=1;i<10;i++) scanf("%d",&a[i]);
    printf("Enter number to insert: ");
    scanf("%d",&x);
    a[0]=x;
    for(i=0;i<10;i++) printf("%d ",a[i]);
    return 0;
}
