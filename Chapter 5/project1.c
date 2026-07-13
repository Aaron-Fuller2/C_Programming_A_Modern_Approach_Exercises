#include <stdio.h>

int main (void) {
    int digits, n;
    printf("Enter a number up to 4 digits: ");
    scanf("%d", &n);

    if (n > 0 && n < 9) {
        digits = 1;
    } else if (n > 9 && n < 100) {
        digits = 2;
    } else if (n > 99 && n < 1000) {
        digits = 3;
    } else {
        digits = 4;
    }

    printf("The number %d has %d digits\n", n, digits);
}