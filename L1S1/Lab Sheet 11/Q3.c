#include <stdio.h>

struct Student {
    char name[50];
    int rollno;
};

void output(char* name, const int *rollno){
    printf("Output");
    printf("\nName: %s", name);
    printf("Roll: %d\n", *rollno);
}

int main(){

    struct Student student;

    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &student.rollno);

    output(&student.name, &student.rollno);


    return 0;
}
