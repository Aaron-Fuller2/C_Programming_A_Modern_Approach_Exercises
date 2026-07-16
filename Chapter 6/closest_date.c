#include <stdio.h>

int main(void) {
    int counter;
    int date1_month, date1_day, date1_year;
    int date2_month, date2_day, date2_year;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &date1_month, &date1_day, &date1_year);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &date2_month, &date2_day, &date2_year);

    /* Compare years */
    if (date1_year < date2_year) {
        counter = 1;
    } else if (date1_year > date2_year) {
        counter = 2;
    } else {
        /* Years equal — compare months */
        if (date1_month < date2_month) {
            counter = 1;
        } else if (date1_month > date2_month) {
            counter = 2;
        } else {
            /* Months equal — compare days */
            if (date1_day < date2_day) {
                counter = 1;
            } else if (date1_day > date2_day) {
                counter = 2;
            } else {
                counter = 0;   /* Dates are identical */
            }
        }
    }

    if (counter == 1) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
               date1_month, date1_day, date1_year,
               date2_month, date2_day, date2_year);
    } else if (counter == 2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
               date2_month, date2_day, date2_year,
               date1_month, date1_day, date1_year);
    } else {
        printf("The dates are the same.\n");
    }

    return 0;
}
