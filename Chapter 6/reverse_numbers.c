#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: \n");
    scanf("%d", &number);

    /*
       We use a do/while loop because we want to process the number
       at least once, even if it's a single digit.

       The algorithm:
         - Extract the last digit using % 10
         - Print that digit (this produces the reversed order)
         - Remove the last digit using / 10
         - Repeat until the number becomes 0
    */
    do {
        // Extract the last digit of the current number
        int reversal_first_number = number % 10;

        // Remove the last digit (integer division)
        int shrink_number = number / 10;

        // Print the extracted digit — this builds the reversed number
        printf("%d", reversal_first_number);

        // Update number so the loop continues with the remaining digits
        number = shrink_number;

    } while (number != 0);  // Sentinel: stop when no digits remain
}
