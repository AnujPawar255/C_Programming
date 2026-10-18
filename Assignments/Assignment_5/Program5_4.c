/*
///////////////////////////////////////////////////////
// Program Name : Program5_4.c
// Description  : Check divisibility by 3 and 5
// Input        : One integer from the user
// Output       : Displays whether the number is divisible
//                by both, only 3, only 5, or neither
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 15
//Output: Divisible by Both

//Input: 9
//Output: Divisible by 3 Only

//Input: 10
//Output: Divisible by 5 Only

//Input: 7
//Output: Not Divisible by Either

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if ((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by Both\n");
    }
    else if (iValue % 3 == 0)
    {
        printf("Divisible by 3 Only\n");
    }
    else if (iValue % 5 == 0)
    {
        printf("Divisible by 5 Only\n");
    }
    else
    {
        printf("Not Divisible by Either\n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}