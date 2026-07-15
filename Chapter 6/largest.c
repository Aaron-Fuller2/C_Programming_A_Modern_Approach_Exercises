# include <stdio.h>

int main (void) {
    float number;
    float largest = 0;
    for (;;) {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number <= 0) {
            printf ("The largest number entered was %f\n", largest);
            break;
        }
        
        if (number >= largest) {
            largest = number;
            printf("number: %f largest: %f\n", number, largest);
        }
    }
}