#include <stdio.h>

int main (void) {
    int n;
    printf("Enter a number between 0 and 32767: \n");
    scanf("%d", &n);
    int fifth = n % 8;
    n = n / 8;
    int fourth = n % 8;
    n = n / 8;
    int third = n % 8;
    n = n / 8;
    int second = n % 8;
    n = n / 8;
    int first = n % 8;
    
    printf("In octal, your number is: %d%d%d%d%d\n", first, second, third, fourth, fifth);
}