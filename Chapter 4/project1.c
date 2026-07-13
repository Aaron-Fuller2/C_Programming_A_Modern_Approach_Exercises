#include <stdio.h>

int main (void) {
    int two_digit_number;

    printf("Enter a two-digit number: \n");
    scanf("%d", &two_digit_number);

    int reversal_first = two_digit_number % 10;
    int reversal_second = two_digit_number / 10;

    printf("The reversal: %d%d \n", reversal_first, reversal_second);

}