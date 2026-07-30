#include <stdio.h>
#include <stdbool.h>

int main (void) {
    int digit, value_count;
    int actual_value = 0;
    int n[10] = {};

    printf("How many numbers will you enter? (MAX 10) ");
    scanf("%d", &value_count);

    for (int i = 0; i < value_count; i++) {

        printf("Enter a number: ");
        scanf("%d", &n[i]);

        if (n[i] < 1) {
            break;
        }

        actual_value++;
    }

    printf("The numbers you entered are ");
    for (int i = 0; i < actual_value; i++) {
        printf("%d ", n[i]);
    }
    printf("\n\n");

    for (int i = 0; i < actual_value; i++) {

        printf("Checking %d... ", n[i]);

        bool digit_seen[10] = {false};
        int num = n[i];
        bool repeated = false;

        while (num > 0) {
            digit = num % 10;

            if (digit_seen[digit]) {
                repeated = true;
            }

            digit_seen[digit] = true;
            num /= 10;
        }

        if (repeated) {
            printf("Repeated digit(s) found\n");
        } else {
            printf("No repeated digits\n");
        }
    }

    return 0;
}
