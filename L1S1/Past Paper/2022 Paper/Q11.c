#include <stdio.h>

int main () {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks>100){
        printf("You are passed!");
    } else {
        printf("You are failed!");
    }
}