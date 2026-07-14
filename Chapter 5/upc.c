#include <stdio.h>

int main(void) {
    int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11, i12;
    int first_sum, second_sum, check;

    printf("Enter the digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d"
        , &i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12);

    first_sum = i1 + i3 + i5 + i7 + i9 + i11;
    second_sum = i2 + i4 + i6 + i8 + i10;

    check = 9 - ((((first_sum * 3) + second_sum) - 1) % 10);

    printf("\n\nCheck digit calculated: %d\n", check);
    printf("Last number entered: %d\n\n", i12);

    printf("Checking to see if above numbers match...\n\n");
    
    if (check == i12) {
        printf("Match! Valid UPC\n\n");
    } else {
        printf("No match, not valid!\n\n");
    }
}
