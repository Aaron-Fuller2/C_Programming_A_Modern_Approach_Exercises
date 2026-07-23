#include <stdio.h>
#include <ctype.h>

int main (void) {
    int ch, upper;
    int sum;
    printf("Enter a word: ");
    sum = 0;

    while ((ch = getchar()) != '\n') {
        upper = toupper(ch);
        if (upper == 'D' || upper == 'G') {
            sum += 2;
        } else if (upper == 'B' || upper == 'C' || upper == 'M' || upper == 'P') {
            sum += 3;
        } else if (upper == 'F' || upper == 'H' || upper == 'V' || upper == 'W' || upper == 'Y') {
            sum += 4;
        } else if (upper == 'K') {
            sum += 5;
        } else if (upper == 'J' || upper == 'X') {
            sum += 8;
        } else if (upper == 'Q' || upper == 'Z'){
            sum += 10;
        } else {
            sum++;
        }

    }
    printf("Scrabble value: %d\n", sum);
    
}