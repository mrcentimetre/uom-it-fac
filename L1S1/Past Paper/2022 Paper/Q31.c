#include <stdio.h>

int main(){

    int bday, x, sum =0;

    printf("Enter Birthday (If you birthday is 1998.08.25 use this format - 19980825 ) :");
    scanf("%d", &bday);

    while (x!=0)
    {
        sum += bday%10;
        x = bday/10;
    }
    printf("%d", sum);
    
}