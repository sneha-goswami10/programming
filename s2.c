#include <stdio.h>

struct bank {
    int acc;
    char name[50];
    float bal;
};

int main() {
    struct bank c[10];
    int i, ac, code;
    float amt;

    for(i=0;i<10;i++){
        printf("Enter Acc No, Name, Balance: ");
        scanf("%d %s %f", &c[i].acc, c[i].name, &c[i].bal);
    }

    printf("\nCustomers with balance below 100:\n");
    for(i=0;i<10;i++)
        if(c[i].bal < 100)
            printf("%d %s\n", c[i].acc, c[i].name);

    printf("\nEnter Acc No, Amount, Code(1=Dep,0=With): ");
    scanf("%d %f %d",&ac,&amt,&code);

    for(i=0;i<10;i++){
        if(c[i].acc == ac){
            if(code==1)
                c[i].bal += amt;
            else{
                if(c[i].bal < amt){
                    printf("Balance insufficient");
                    return 0;
                }
                c[i].bal -= amt;
            }
            printf("Updated Balance = %.2f", c[i].bal);
            return 0;
        }
    }
    printf("Account not found");
    return 0;
}
