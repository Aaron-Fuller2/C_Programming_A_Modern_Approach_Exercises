#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom;
    char sign;

    printf("Enter fraction +, -, * or / fraction: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &sign, &num2, &denom2);

    printf("%d/%d %c %d/%d\n", num1, denom1, sign, num2, denom2);

    if (sign == '+') {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num, result_denom);
    }

    if (sign == '-') {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The difference is %d/%d\n", result_num, result_denom);
    }

    if (sign == '*') {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        printf("The product is %d/%d\n", result_num, result_denom);
    }

    if (sign == '/') {
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
        printf("The quotient is %d/%d\n", result_num, result_denom);
    }

    return 0;
}
