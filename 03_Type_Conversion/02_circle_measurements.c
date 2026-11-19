
#include <stdio.h>

const double Pi = 3.14159;

int main() {
    unsigned int r;

    scanf("%u", &r);

    double x = r;

    printf("Diameter = %.2f\n", 2 * x);
    printf("Circumference = %.2f\n", 2 * Pi * x);
    printf("Area = %.2f\n", Pi * x * x);

    return 0;
}
