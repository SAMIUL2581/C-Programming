
#include <stdio.h>

int main() {
    unsigned int P, T, R;

    scanf("%u %u %u", &P, &R, &T);

    double SI = ((double)P * R * T) / 100;

    printf("Simple Interest = %.2f\n", SI);
    printf("Total Amount = %.2f\n", P + SI);

    return 0;
}
