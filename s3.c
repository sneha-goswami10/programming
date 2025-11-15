#include <stdio.h>

struct student_data {
    int roll;
    char name[50];
    int phy, chem, math, total;
};

int main() {
    struct student_data s;

    printf("Enter Roll, Name: ");
    scanf("%d %s",&s.roll,s.name);

    printf("Enter Physics, Chemistry, Maths marks: ");
    scanf("%d %d %d",&s.phy,&s.chem,&s.math);

    s.total = s.phy + s.chem + s.math;

    printf("\nRoll: %d\nName: %s\nPhysics: %d\nChemistry: %d\nMaths: %d\nTotal: %d",
    s.roll,s.name,s.phy,s.chem,s.math,s.total);

    return 0;
}
