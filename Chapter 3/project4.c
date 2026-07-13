#include <stdio.h>

int main (void) {

    int first3, second3, last4;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &first3, &second3, &last4);

    printf("%d.%d.%d\n", first3, second3, last4);
}