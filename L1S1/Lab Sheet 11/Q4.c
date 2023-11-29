#include <stdio.h>

struct Complex {
    double real;
    double image;
} complex1, complex2, result;

int main(){

    printf("For 1st complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%lf", &complex1.real);
    scanf("%lf", &complex1.image);

    printf("For 2nd complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%lf", &complex2.real);
    scanf("%lf", &complex2.image);

    result.real = complex1.real + complex2.real;
    result.image = complex1.image + complex2.image;

    printf("Sum=%.1lf+%.1lfi", result.real, result.image);

    return 0;
}
