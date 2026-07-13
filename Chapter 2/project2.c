#include <stdio.h>

int main (void) {

    float radius;

    printf("Enter Radius:\n");
    scanf("%f", &radius);

    printf("volume: %f\n", 4.0f/3.0f * 3.14 * (radius * radius * radius));
}