#include <stdio.h>

int main(){

    int disId, marks;

    printf("Enter 1 for Colombo, Enter 2 for Jaffna, Enter 3 for Kandy\n");

    printf("Enter Your District: ");
    scanf("%d", &disId);

    switch (disId)
    {
    case 1:
        printf("Enter marks: ");
        scanf("%d", &marks);

        if (marks>170){
            printf("You are passed!");
        } else {
            printf("You are failed!");
        }
        break;
    
    case 2:
        printf("Enter marks: ");
        scanf("%d", &marks);

        if (marks>150){
            printf("You are passed!");
        } else {
            printf("You are failed!");
        }
        break;

    case 3:
        printf("Enter marks: ");
        scanf("%d", &marks);

        if (marks>160){
            printf("You are passed!");
        } else {
            printf("You are failed!");
        }
        break;
    default:
        printf("Invalid Number!");
        break;
    }

}