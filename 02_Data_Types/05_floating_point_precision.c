#include <stdio.h>

int main()
{
    float a, b;
    double x, y;

    a = 0.1f;
    b = 0.2f;
    x = 0.1;
    y = 0.2;

    printf("Float sum  = %.20f\n", a + b);
    printf("Double sum = %.20f\n", x + y);

    return 0;
}