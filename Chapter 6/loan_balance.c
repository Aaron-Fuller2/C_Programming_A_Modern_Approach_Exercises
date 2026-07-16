#include <stdio.h>

int main (void) {
    
    float loan_amount, interest_rate, monthly_payment, monthly_interest_rate, number_payments, payment, last_payment;
    

    printf("Enter amount of loan: $");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: %%");
    scanf("%f", &interest_rate);

    printf("Enter montly payment amount: $");
    scanf("%f", &monthly_payment);

    printf("Enter number of payments: ");
    scanf("%f", &number_payments);

    for (int i = 1; i <= number_payments; i++) {
        if (i == 1) {
            monthly_interest_rate = (loan_amount * (interest_rate / 100.00))/ 12.00;
            payment = (loan_amount + monthly_interest_rate) - monthly_payment;
            last_payment = payment;
            printf("Balance remaining after %d payment:  $%.2f\n", i, payment);
        } else {
            monthly_interest_rate = (last_payment * (interest_rate / 100.00))/ 12.00;
            payment = (last_payment + monthly_interest_rate) - monthly_payment;
            printf("Balance remaining after %d payments: $%.2f\n", i, payment);
            last_payment = payment;
        }
    }
}