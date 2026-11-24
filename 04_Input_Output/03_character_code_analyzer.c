
#include <stdio.h>

int main() {
    int a, b;

    a = getchar();
    getchar();  // Enter-এর newline বাদ দেওয়া
    b = getchar();

    printf("First Character Code : %d\n", a);
    printf("Second Character Code: %d\n", b);
    printf("Total Code           : %d\n", a + b);

    return 0;
}
