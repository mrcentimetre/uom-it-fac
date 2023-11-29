#include <stdio.h>

int main() {
    int Arr1[5];

    for(int i=0;i<5;i++){
        printf("Enter a positive integer for the array:");
        scanf("%d",&Arr1[i]);

        if (Arr1[i]<0){
            printf("Error,You Entered Negative Value.");
        }
    }
    printf("\n");

    for(int i=0;i<5;i++){
        printf("%d ",Arr1[i]);
    }

    return 0;

}
