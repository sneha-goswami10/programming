#include <stdio.h>

void find(int a[], int n, int *mx, int *mn) {
    int i;
    *mx = *mn = a[0];
    for(i=1;i<n;i++){
        if(a[i] > *mx) *mx = a[i];
        if(a[i] < *mn) *mn = a[i];
    }
}

int main() {
    int a[10], n, i, mx, mn;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    find(a,n,&mx,&mn);
    printf("Max = %d\nMin = %d", mx, mn);
    return 0;
}
