#include <stdio.h>

int main (void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++) {
        if (i * i % 2 == 0 && i * i <= number) {
            printf("%d\n", i * i);
        }
    }
}