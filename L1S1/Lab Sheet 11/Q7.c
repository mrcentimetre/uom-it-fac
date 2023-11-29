#include <stdio.h>

int main(){

    int num1, num2;

    printf("Enter Number 1 :");
    scanf("%d", &num1);

    printf("Enter Number 2 :");
    scanf("%d", &num2);

    int *num1point = &num1;
    int *num2point = &num2;

    int sum = *num1point + *num2point;

    printf("%d", sum);


    return 0;
}
