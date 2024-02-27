#include <stdio.h>

int main (){

    int arr[5][5] = {{8, 3, 9, 0, 10},
                    {3, 5, 17, 1, 2},
                    {2, 8, 6, 23, 1},
                    {15, 7, 3, 2, 9},
                    {6, 14, 2, 6, 0}};

    int i, j;
    int sum = 0;

    printf("Raw Total : ");

    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            sum += arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    printf("\n");
    printf("Column Total : ");

    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            sum += arr[j][i];
        }
        printf("%d ", sum);
        sum = 0;
    }

    return 0;

}