/*
///////////////////////////////////////////////////////
// Program Name : Program12_2.c
// Description  : Check whether a number contains zero
//                or not
// Input        : One integer from the user
// Output       : Displays whether the number contains
//                zero or not
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 2395
//Output: There is no Zero

//Input: 1018
//Output: It Contains Zero

//Input: 9000
//Output: It Contains Zero

//Input: 10687
//Output: It Contains Zero

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if (iNo == 0)
    {
        return TRUE;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}