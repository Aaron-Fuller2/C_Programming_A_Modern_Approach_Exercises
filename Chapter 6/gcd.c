#include <stdio.h>

int main (void) {
    int m, n;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    for (;;) {
        if (n == 0) {
            printf("Greatest common divisor: %d\n", m);
            break;
        } else {
            int remainder = m % n;
            m = n;
            n = remainder;
        }
    }
}