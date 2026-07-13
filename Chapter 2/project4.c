#include <stdio.h>

int main (void) {
    int x;
    int answer;
    printf("Enter value for x in the following\n5x^5 + 2x^4 + 5x^3 + x^2 + 7x\nEnter x: ");
    scanf("%i", &x);

    //printf("the value of x is %i", x);

    answer = (5 * (x * x * x * x * x)) + (2 * (x *x * x * x)) + (5 * (x * x * x)) + (x * x) + (7 * x);

    printf("The answer is %i \n", answer);
}