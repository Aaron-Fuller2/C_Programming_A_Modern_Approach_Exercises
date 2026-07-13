#include <stdio.h>

int main(void) {

    int item_number, month, day, year;
    float unit_price;

    printf("Enter item numbe: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\n\nItem\t\t\tUnit\t\t\tPurchase\n");
    printf("\t\t\tPrice\t\t\tDate\n");
    printf("%-9d\t\t$%7.2f\t\t%-2d/%-2d/%-2d\n", item_number,unit_price,month,day,year);
}