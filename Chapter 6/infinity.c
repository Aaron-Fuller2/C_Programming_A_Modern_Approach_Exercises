#include <stdio.h>

int main(void)
{
    int n, i;
    double sum, factorial;

    printf("Enter n: ");
    scanf("%d", &n);

    sum = 1.0;
    factorial = 1.0;

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
        sum = sum + (1.0 / factorial);
    }

    printf("Approximation of e: %.10f\n", sum);

    return 0;
}
