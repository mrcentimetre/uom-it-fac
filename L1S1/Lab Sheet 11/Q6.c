#include <stdio.h>

union members {
    char name[20];
    int rollno;
    int marks;
}member1;

int main() {
    printf("Enter student’s name:");
    scanf(" %[^\n]s",&member1.name);

    printf("Student Name = %s\n",member1.name);

    printf("Enter roll number:");
    scanf("%d",&member1.rollno);

    printf("Roll Number = %d\n",member1.rollno);

    printf("Enter the marks:");
    scanf("%d",&member1.marks);

    printf("Marks = %d",member1.marks);

    return 0;

}
