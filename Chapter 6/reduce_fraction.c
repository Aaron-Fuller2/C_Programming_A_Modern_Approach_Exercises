#include <stdio.h>
#include <stdio.h>

int main(void) {
    int m, n;

    /* 
       Prompt the user for a fraction in the form a/b.
       scanf("%d/%d") reads an integer, then a literal '/', then another integer.
       Example input: 42/56
       After this:
         m = 42  (numerator)
         n = 56  (denominator)
    */
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    /*
       Store the original numerator and denominator.
       We MUST save these because m and n will be overwritten
       during Euclid's algorithm while finding the GCD.
    */
    int top = m;
    int bottom = n;

    /*
       Euclid's Algorithm:
       -------------------
       This loop repeatedly replaces (m, n) with (n, m % n)
       until n becomes 0.

       When n == 0, m contains the greatest common divisor (GCD).

       Sentinel condition:
         n == 0 → stop the loop.
    */
    for (;;) {
        if (n == 0) {
            /* 
               When n becomes 0, m holds the GCD.
               Break out of the infinite loop.
            */
            break;
        } else {
            /*
               Compute the remainder of m divided by n.
               This is the core step of Euclid's algorithm.
            */
            int remainder = m % n;

            /*
               Shift values:
                 - The old n becomes the new m.
                 - The remainder becomes the new n.
               This moves us one step closer to n == 0.
            */
            m = n;
            n = remainder;
        }
    }

    /*
       At this point:
         m = GCD(top, bottom)

       To reduce the fraction:
         Divide both numerator and denominator by the GCD.
    */
    printf("In lowest terms: %d/%d\n", top / m, bottom / m);
}
/*
int main (void) {
    int m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    int top = m;
    int bottom = n;

    for (;;) {
        if (n == 0) {
            break;
        } else {
            int remainder = m % n;
            m = n;
            n = remainder;
        }
    }
    printf("In lowest terms: %d/%d\n", top / m, bottom / m);
}
    */