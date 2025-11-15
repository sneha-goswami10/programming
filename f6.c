#include <stdio.h>

int add(int a, int b){ return a+b; }
int sub(int a, int b){ return a-b; }
int mul(int a, int b){ return a*b; }
float divi(int a, int b){ return (float)a/b; }

int main() {
    int a, b, ch;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("1.Add 2.Sub 3.Mul 4.Div\nEnter choice: ");
    scanf("%d",&ch);
    if(ch==1) printf("%d", add(a,b));
    else if(ch==2) printf("%d", sub(a,b));
    else if(ch==3) printf("%d", mul(a,b));
    else if(ch==4) printf("%f", divi(a,b));
    else printf("Invalid");
    return 0;
}
