#include <stdio.h>
int main() {
    int a[10],i,x,f=0;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    printf("Enter value to search: ");
    scanf("%d",&x);
    for(i=0;i<10;i++) if(a[i]==x) f=1;
    if(f==1) printf("Found");
    else printf("Not found");
    return 0;
}
