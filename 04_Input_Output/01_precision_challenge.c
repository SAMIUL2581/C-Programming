
#include <stdio.h>

int main() {
    double p1, p2, p3;
    float discount;

    double total, after_discount, average;
    int integer_average;
    scanf("%lf %lf %lf", &p1, &p2, &p3);
    scanf("%f", &discount);

    total = p1 + p2 + p3;
    after_discount = total - discount;
    average = after_discount / 3.0;
    integer_average=(int)average;

    printf("Total Price     : %.2f\n", total);
    printf("After Discount  : %.2f\n", after_discount);
    printf("Average Price   : %.2f\n", average);
    printf("Integer Average : %d\n",integer_average);
    return 0;
}
