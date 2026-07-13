#include <stdio.h> 

int main (void) {
    int entered_mm, entered_dd, entered_yyyy;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &entered_mm, &entered_dd, &entered_yyyy);

    //printf("Test print for entered_date: %d/%d/%d", entered_mm, entered_dd, entered_yyyy);

    printf("The entered date: %d%d%d\n", entered_yyyy,entered_mm,entered_dd);
}