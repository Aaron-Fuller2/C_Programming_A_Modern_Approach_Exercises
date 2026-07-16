#include <stdio.h>

int main(void) {
    int days_in_month, starting_day;

    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    /* Print initial spacing */
    for (int i = 1; i < starting_day; i++) {
        printf("   ");
    }

    int column = starting_day;

    for (int day = 1; day <= days_in_month; day++) {
        printf("%3d", day);

        if (column == 7) {
            printf("\n");
            column = 1;
        } else {
            column++;
        }
    }

    printf("\n");
    return 0;
}
