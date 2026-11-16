
#include <stdio.h>

int main()
{
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    printf("Total = %d\n", x + y + z);
    printf("Average = %.2f\n", ((float)x + y + z) / 3);

    return 0;
}
