#include <stdio.h>

int main (void) {
    float income;

    printf("Enter taxable income: $");
    scanf("%f", &income);

    if (income <= 750) {
        printf("Tax owed: $%.2f\n", income * 0.01);
    } else if ( income > 750 && income <= 2250){
        printf("Tax owed: $%.2f\n", 7.50 + (income * 0.02));
    } else if (income > 2250 && income <= 3750) {
        printf("Tax owed: $%.2f\n", 37.50 + (income * 0.03));
    } else if (income > 3750 && income <= 5250) {
        printf("Tax owed: $%.2f\n", 82.50 + (income * 0.04));
    } else if (income > 5250 && income <= 7000)  {
        printf("Tax owed: $%.2f\n", 142.50 + (income * 0.05));
    } else {
        printf("Tax owed: $%.2f\n", 230.00 + (income * 0.06));
    }
    
    return 0;
    
}