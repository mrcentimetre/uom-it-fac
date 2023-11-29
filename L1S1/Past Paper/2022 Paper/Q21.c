#include <stdio.h>

int main(){

    int humanPop = 1000;
    int animalPop = 200;

    for (int i=0; i<10; i++){
        humanPop /= 1.1;

        for (int j = 0; j < 12; j++)
        {
            animalPop /= 0.98;
        }

        printf("\nEnd of the Year %d\n", 10-i);
        printf("Human Population = %d\n", humanPop);
        printf("Animal Population = %d\n", animalPop);
        
    }


}