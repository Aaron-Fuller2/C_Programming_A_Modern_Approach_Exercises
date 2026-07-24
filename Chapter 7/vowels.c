#include <stdio.h>
#include <ctype.h>

int main (void) {
    int ch, v_count, upper;
    
    printf("Enter a sentance: ");
    v_count = 0;
    while ((ch = getchar()) != '\n') {
        upper = toupper(ch);
        if (upper == 'A'|| upper == 'E' || upper == 'I' || upper == 'O' || upper == 'U') {
            v_count++;
        }
    }
    
    printf("Your sentance contains %d\n", v_count);

    return 0;
}