
#include <stdio.h>

int main() {
    unsigned int D, F, P;

    scanf("%u %u %u", &D, &F, &P);

    printf("Fuel Efficiency = %.2f km/l\n", (double)D / F);
    printf("Total Fuel Cost = %.2f Tk\n", (double)F * P);
    printf("Cost Per Km = %.2f Tk\n", ((double)F * P) / D);

    return 0;
}
