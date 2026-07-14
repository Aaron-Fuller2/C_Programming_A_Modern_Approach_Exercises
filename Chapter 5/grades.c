#include <stdio.h>

int main(void) {
  
    int numeric_grade_ones, numeric_grade_tens;
    char letter_grade;

    printf("Enter numerical grade: ");
    scanf("%1d%1d", &numeric_grade_tens, &numeric_grade_ones);

    printf("Grade: %d%d\n", numeric_grade_tens, numeric_grade_ones);

    switch (numeric_grade_tens) {
        case 10:
        case 9:
            letter_grade = 'A';
            break;

        case 8:
            letter_grade = 'B';
            break;

        case 7:
            letter_grade = 'C';
            break;

        case 6:
            letter_grade = 'D';
            break;

        default:
            letter_grade = 'F';
            break;
    }

    printf("Letter grade: %c\n", letter_grade);

    return 0;
}
