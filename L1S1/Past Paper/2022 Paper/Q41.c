#include <stdio.h>

int main(){
    int stdarr[25];

    for (int i = 0; i < 25; i++)
    {
        printf("Enter your marks :");
        scanf("%d", &stdarr[i]);
    }

    for (int i = 0; i < 25; i++)
    {
        printf("%d ", stdarr[i]);
    }

    
    
}