#include <stdio.h>

int main (void) {

    float amount = 0;

    printf("Enter Amount: ");
    scanf("%f", &amount);

    printf("Amount with tax: $%.2f\n", amount + (0.05 * amount));
}