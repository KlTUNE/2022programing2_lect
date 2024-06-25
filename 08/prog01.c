#include <stdio.h>

struct student{
    char name[64];
    int age, number, grade;
};

int main (void){
    struct student p1 = {"tanaka",19,1,1};
    struct student p2 = {"suzuki",22,6,4};
    struct student p3 = {"yamada",19,8,1};

    printf("%s %d %d %d\n", p1.name, p1.age, p1.number, p1.grade);
    printf("%s %d %d %d\n", p2.name, p2.age, p2.number, p2.grade);
    printf("%s %d %d %d\n", p3.name, p3.age, p3.number, p3.grade);

    return 0;
}