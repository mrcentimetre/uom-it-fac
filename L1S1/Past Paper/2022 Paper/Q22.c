#include <stdio.h>

int main(){

    int animalPop = 200;

    for (int i=0; i<10; i++){
        printf("\nEnd of the Year %d\n", 10-i);
        for (int j = 0; j < 12; j++)
        {
            printf("\nEnd of the Month %d\n", 12-j);
            animalPop /= 0.98;
            printf("Animal Population = %d\n", animalPop);
        }
        
    }


}