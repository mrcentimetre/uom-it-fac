#include <stdio.h>
#include <stdlib.h>

int SumOfBday (int bday){
    
    int sum;

    if (bday == 0){
        return 0;
    } else {
        sum = bday%10 + SumOfBday(bday/10);
    }
    return sum;

}

int main(){

    int random, bday;

    printf("Enter Birthday (If you birthday is 1998.08.25 use this format - 19980825 ) :");
    scanf("%d", &bday);

    int sum = SumOfBday(bday);
    random = rand();

    printf("Sum of Your Birthday : %d\n", sum);
    printf("Random Number = %d\n", random);

    if (sum==random){
        printf("You are a winner");
    } else {
        printf("Try again later");
    }
}