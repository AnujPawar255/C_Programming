/*
///////////////////////////////////////////////////////
// Program Name : Program2_5.c
// Description  : Check whether a number is even or odd
// Input        : One integer from the user
// Output       : Displays whether the number is even or odd
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    // Display result
    if (bRet == TRUE)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}