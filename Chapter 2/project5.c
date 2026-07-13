#include <stdio.h>

int main (void) {
    int dollar_amount, twenty, ten, five, one;
    printf("Enter dollar amount: ");
    scanf("%i", &dollar_amount);

    twenty = dollar_amount / 20;
    dollar_amount = dollar_amount - (twenty * 20);

    ten = dollar_amount / 10;
    dollar_amount = dollar_amount - (ten * 10);

    five = dollar_amount / 5;
    dollar_amount = dollar_amount - (five * 5);

    one = dollar_amount / 1;
    dollar_amount = dollar_amount - (one * 1);

    printf("Twenty: %i\n", twenty);
    printf("ten: %i\n", ten);
    printf("five: %i\n", five);
    printf("one: %i\n", one);

    //printf("%i\n", counter);
}