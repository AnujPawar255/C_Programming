/*
///////////////////////////////////////////////////////
// Program Name : Program12_5.c
// Description  : Count the frequency of digits that
//                are less than 6 in a given number
// Input        : One integer from the user
// Output       : Displays the count of digits less than 6
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 2395
//Output: 3

//Input: 1018
//Output: 3

//Input: 9440
//Output: 3

//Input: 96672
//Output: 1

#include <stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo == 0)
    {
        return 1;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit < 0)
        {
            iDigit = -iDigit;
        }

        if (iDigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d\n", iRet);

    return 0;
}