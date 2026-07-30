#include <stdio.h>

int main (void) {
    int digit_seen[10] = {0};
    int occurances[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
        }
        digit_seen[digit] = 1;
        occurances[digit] += 1;
        n /= 10;
    }

    printf("Digit:\t      0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurances: ");

    for (int i = 0; i < 10; i++) {
        printf("%3d", occurances[i]);
    }
    printf("\n");
    printf("Repeated digit(s): ");

    for (int i = 0; i < 10; i++) {
        if (occurances[i] > 1) {
            printf("%2d", i);
        } 
    }

    printf("\n");

    return 0;
}