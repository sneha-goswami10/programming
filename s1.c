#include <stdio.h>

struct student {
    int roll;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

int main() {
    struct student s[10];
    int i, r;

    for(i=0;i<10;i++){
        printf("Enter Roll, Name, Course, Major, Minor: ");
        scanf("%d %s %s %s %s", &s[i].roll, s[i].name, s[i].course, s[i].major, s[i].minor);
    }

    printf("\nNames of all students:\n");
    for(i=0;i<10;i++)
        printf("%s\n", s[i].name);

    printf("\nEnter roll no to search: ");
    scanf("%d",&r);

    for(i=0;i<10;i++)
        if(s[i].roll == r){
            printf("Roll: %d\nName: %s\nCourse: %s\nMajor: %s\nMinor: %s",
            s[i].roll,s[i].name,s[i].course,s[i].major,s[i].minor);
            return 0;
        }

    printf("Not found");
    return 0;
}
