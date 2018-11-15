#ifndef ERRORCHECKS_H_INCLUDED
#define ERRORCHECKS_H_INCLUDED

#define OK 1
#define NO 0

// prototypes
int isNumber (float input);
int notZero (float input);

// check if input is a number
int isNumber(float input)
{
    int returnValue = NO;

    // change return to OK if input is digit
    if (isdigit(input) > -1)
    {
        returnValue = OK;
    }

    return returnValue;
}

// make sure input is not zero
int notZero(float input)
{
    int returnValue = NO;

    // change return to OK if input is not zero
    if (input != 0)
    {
        returnValue = OK;
    }

    return returnValue;
}

#endif // ERRORCHECKS_H_INCLUDED
