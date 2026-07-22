/* Prints a table of squares using for loop */

#include <stdio.h>

int main(void) {
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    while (getchar() != '\n') { 
        ;
    }

    for (int i = 1, pause = 0; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
        pause++;

        if (pause == 24) {
            printf("Press Enter to continue...");
            getchar();
            pause = 0;
        }
    }

    return 0;
}
