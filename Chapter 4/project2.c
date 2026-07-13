#include <stdio.h>

int main (void) {
    int three_digit_number;

    printf("Enter a three-digit number: \n");
    scanf("%d", &three_digit_number);

    int reversal_first = three_digit_number % 10;
    int reversal_second = (three_digit_number / 10) % 10;
    int reversal_third = three_digit_number / 100;

    printf("The reversal: %d%d%d \n", reversal_first, reversal_second,reversal_third);

}