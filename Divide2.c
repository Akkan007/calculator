#include <stdio.h>

int main() {
    float dividend, divisor, quotient;

    printf("--- Division ---\n");

    printf("Dividend: ");
    scanf("%f", &dividend);

    printf("Divisor: ");
    scanf("%f", &divisor);

    if (divisor == 0) {
        printf("Error: Cannot be divided by zero!\n");
    } else {
        quotient = dividend / divisor;

        printf("%.2f divided by %.2f equals %.2f\n", dividend, divisor, quotient);
    }

    return 0;
}