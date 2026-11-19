
#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    printf("Total=%d\n", x + y);
    printf("Average: %.2f\n", ((double)x + y) / 2);

    return 0;
}
