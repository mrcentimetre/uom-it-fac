#include <stdio.h>

void fibo(int a, int b, int num){
    int c;
    if(num!=0){
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
        num--;
        fibo(a, b, num);
    }
}

int main(){
    int n;
    int a=0, b=1;

    printf("Enter No of Terms: ");
    scanf("%d", &n);

    fibo(a, b, n);
}