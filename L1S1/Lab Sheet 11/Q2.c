#include <stdio.h>

struct Distance {
    int feet;
    double inch;
} distance1, distance2, result;

int main(){

    printf("Enter Information for 1st distance\n");
    printf("Enter feet:");
    scanf("%d", &distance1.feet);

    printf("Enter inch:");
    scanf("%lf", &distance1.inch);

    printf("Enter Information for 2nd distance\n");
    printf("Enter feet:");
    scanf("%d", &distance2.feet);

    printf("Enter inch:");
    scanf("%lf", &distance2.inch);

    result.feet = distance1.feet + distance2.feet;
    result.inch = distance1.inch + distance2.inch;

    while (result.inch >= 12.00){
        result.inch = result.inch - 12.00;
        result.feet++;
    }

    printf("Sum of Distance = %d\' -%.1f\"", result.feet, result.inch);

    return 0;
}
