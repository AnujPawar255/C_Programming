/*
///////////////////////////////////////////////////////
// Program Name : Program4_1.c
// Description  : Check whether a number is positive,
//                negative, or zero
// Input        : One integer from the user
// Output       : Displays Positive Number, Negative
//                Number, or Zero
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 15
//Output: Positive Number

//Input: -8
//Output: Negative Number

//Input: 0
//Output: Zero

#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if (iValue > 0)
    {
        printf("Positive Number\n");
    }
    else if (iValue < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}