#include <stdio.h>

struct Student {
    char name[50];
    int stdno;
    int grade;
};

int main(){

    struct Student student1;

    printf("Enter Name :");
    fgets(student1.name, sizeof(student1.name), stdin);

    printf("Enter Student No :");
    scanf("%d", &student1.stdno);

    printf("Enter Grade :");
    scanf("%d", &student1.grade);

    printf("\nName : %s", student1.name);
    printf("Student No : %d\n", student1.stdno);
    printf("Grade : %d\n", student1.grade);


    return 0;
}
