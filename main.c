#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "ErrorChecks.h"

int main()
{
    float numerator;
    float denominator;
    float quotient;

    printf("Give a numerator: ");
    scanf("%f", &numerator);

    printf("Give a denominator: ");
    scanf("%f", &denominator);

    // report error if either input is not a number
    if (isNumber(numerator) == NO || isNumber(denominator) == NO)
    {
        printf("You gave an input besides a number. I cannot divide this.");
    }
    // report error if denominator is zero
    else if (notZero(denominator) == NO)
    {
        printf("I can't divide by zero.");
    }
    // if no errors, divide and give quotient
    else
    {
        quotient = numerator / denominator;
        printf("%.3f / %.3f = %.3f", numerator, denominator, quotient);
    }

    return 0;
}
