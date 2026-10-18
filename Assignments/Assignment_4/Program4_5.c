/*
///////////////////////////////////////////////////////
// Program Name : Program4_5.c
// Description  : Check whether a number is divisible by 5
// Input        : One integer from the user
// Output       : Displays whether the number is divisible by 5
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 45
//Output: Divisible by 5

//Input: 23
//Output: Not Divisible by 5

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
    if ((iValue % 5) == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}