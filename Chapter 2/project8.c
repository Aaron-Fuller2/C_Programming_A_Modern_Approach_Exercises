#include <stdio.h>

int main (void) {
    
    float loan_amount, interest_rate, monthly_payment, monthly_interest_rate;
    float first_payment, second_payment, third_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter montly payment: ");
    scanf("%f", &monthly_payment);

    
    monthly_interest_rate = (loan_amount * (interest_rate / 100.00))/ 12.00;
    first_payment = (loan_amount + monthly_interest_rate) - monthly_payment;
    
    monthly_interest_rate = (first_payment * (interest_rate / 100.00))/ 12.00;
    second_payment = (first_payment + monthly_interest_rate) - monthly_payment;
    
    monthly_interest_rate = (second_payment * (interest_rate / 100.00))/ 12.00;
    third_payment = (second_payment + monthly_interest_rate) - monthly_payment;

    printf("Balance remaining after first payment: $%.2f\n", first_payment);
    printf("Balance remaining after second payment: $%.2f\n", second_payment);
    printf("Balance remaining after third payment: $%.2f\n", third_payment);
}