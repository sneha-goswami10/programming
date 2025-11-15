#include <stdio.h>
int main() {
    int a[10],i,p;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    printf("Enter position to delete: ");
    scanf("%d",&p);
    for(i=p;i<9;i++) a[i]=a[i+1];
    for(i=0;i<9;i++) printf("%d ",a[i]);
    return 0;
}
