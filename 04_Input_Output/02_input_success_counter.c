
#include <stdio.h>

int main() {
    int a, b, result;
    double x;

    result = scanf("%d %d %lf", &a, &b, &x);

    printf("Successful Inputs: %d\n", result);

    return 0;
}
