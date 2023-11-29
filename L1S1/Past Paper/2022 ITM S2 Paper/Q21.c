#include <stdio.h>

int main(){

    printf("X");
    for (int i = 1; i < 13; i++)
    {
        printf("\t%d", i);
    }

    printf("\n");

    for (int i = 1; i < 13; i++)
    {
        printf("%d", i);
        for (int j = 1; j < 13; j++)
        {
            printf("\t%d", i*j);
        }
        printf("\n");
        
    }
    


}