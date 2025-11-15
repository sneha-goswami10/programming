#include <stdio.h>

struct cricket {
    char name[50];
    int age, matches;
    float avg;
};

int main() {
    struct cricket p[10], t;
    int i, j;

    for(i=0;i<10;i++){
        printf("Enter Name, Age, Matches, Avg: ");
        scanf("%s %d %d %f", p[i].name, &p[i].age, &p[i].matches, &p[i].avg);
    }

    for(i=0;i<9;i++)
        for(j=i+1;j<10;j++)
            if(p[i].avg > p[j].avg){
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }

    printf("\nSorted by Average Runs:\n");
    for(i=0;i<10;i++)
        printf("%s %.2f\n", p[i].name, p[i].avg);

    return 0;
}
