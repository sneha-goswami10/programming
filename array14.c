#include <stdio.h>
int main() {
    int a[10],i,x;
    printf("Enter 9 numbers: ");
    for(i=0;i<9;i++) scanf("%d",&a[i]);
    printf("Enter number: ");
    scanf("%d",&x);
    a[9]=x;
    for(i=0;i<10;i++) printf("%d ",a[i]);
    return 0;
}
