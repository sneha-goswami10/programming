#include <stdio.h>
int main() {
    int a[10],f[10]={0},i,j,c;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    for(i=0;i<10;i++){
        c=1;
        if(f[i]==1) continue;
        for(j=i+1;j<10;j++){
            if(a[i]==a[j]){ c++; f[j]=1; }
        }
        printf("%d occurs %d times\n",a[i],c);
    }
    return 0;
}
