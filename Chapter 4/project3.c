#include <stdio.h>

int main (void) {
    int digit_one;
    int digit_two;
    int digit_three;

    printf("Enter a three-digit number: \n");
    scanf("%1d%1d%1d", &digit_one, &digit_two, &digit_three);

    printf("The reversal: %d%d%d \n", digit_three, digit_two,digit_one);
}