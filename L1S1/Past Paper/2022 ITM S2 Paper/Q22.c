#include <stdio.h>

int main() {
    int n, c;
    int a=0, b=1;

    printf("Enter No of Terms: ");
    scanf("%d", &n);

    for(int i=n; i>0; i--){
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }
}