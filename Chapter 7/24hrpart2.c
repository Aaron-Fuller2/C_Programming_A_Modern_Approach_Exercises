#include <stdio.h>
#include <ctype.h>

int main (void) {
    int hour, minute, 
    ap, converted_ap;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d %2s", &hour, &minute, &ap);

    converted_ap = toupper(ap);

    printf("%02d:%02d %02d\n", hour, minute, ap);
    printf("To upper: %02d\n", converted_ap);

    /*
    if (converted_ap == "A" || converted_ap == "AM") {
         printf("Equivalent 12-hour time: %02d:%02d %02d\n", hour, minute, ap);
    }

    if (converted_ap == "P" || converted_ap == "PM") {
        hour -= 12;
        printf("Equivalent 12-hour time: %02d:%02d %02d\n", hour, minute, ap);
    }
    */
/*
    if (hour > 12) {
        hour -= 12;
        printf("Equivalent 12-hour time: %02d:%02d PM\n", hour, minute);
    } else if (hour == 12) {
        printf("Equivalent 12-hour time: %02d:%02d PM\n", hour, minute);
    } else {
        printf("Equivalent 12-hour time: %02d:%02d AM\n", hour, minute);
    }
        */
}