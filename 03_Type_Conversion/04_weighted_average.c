
#include <stdio.h>

int main() {
    unsigned int A, B, C;

    scanf("%u %u %u", &A, &B, &C);

    double avr = ((double)A * 20 + B * 30 + C * 50) / 100;

    printf("Weighted Average = %.2f\n", avr);

    return 0;
}
