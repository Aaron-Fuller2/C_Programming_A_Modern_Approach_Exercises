#include <stdio.h>

int main (void) {
    int one, two, three, four;
    int five, six, seven, eight;
    int nine, ten, eleven, twelve;
    int thirteen, fourteen, fifteen, sixteen;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d",
    &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen
    );

    printf("%d %d %d %d\n", one, two, three, four);
    printf("%d %d %d %d\n", five, six, seven, eight);
    printf("%d %d %d %d\n", nine, ten, eleven, twelve);
    printf("%d %d %d %d\n\n", thirteen, fourteen, fifteen, sixteen);

    int row1 = one + two + three + four;
    int row2 = five + six + seven + eight;
    int row3 = nine + ten + eleven + twelve;
    int row4 = thirteen + fourteen + fifteen + sixteen;

    int col1 = one + five + nine + thirteen;
    int col2 = two + six + ten + fourteen;
    int col3 = three + seven + eleven + fifteen;
    int col4 = four + eight + twelve + sixteen;

    int diag1 = one + six + eleven + sixteen;
    int diag2 = four + seven + ten + thirteen;
 

    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
    printf("Diagonal sums: %d %d\n", diag1, diag2);
}