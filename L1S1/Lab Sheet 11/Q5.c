#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

int main(){

    struct Student students[10];

    printf("Enter information of students:\n");

    for (int i=0; i<10; i++) {


        printf("\nFor roll number %d\n", i+1);

        printf("Enter name: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nDisplaying information of students:\n");

    for (int i = 0; i < 10; ++i) {
        printf("\nInformation for roll number %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
