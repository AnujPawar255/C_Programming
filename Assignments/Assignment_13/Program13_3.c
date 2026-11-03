/*
///////////////////////////////////////////////////////
// Program Name : Program13_3.c
// Description  : Count the number of digits between
//                3 and 7 in a given number
// Input        : One integer from the user
// Output       : Displays the count of digits between
//                3 and 7
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 2395
//Output: 1

//Input: 1018
//Output: 0

//Input: 4521
//Output: 2

//Input: 9922
//Output: 0

#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit < 0)
        {
            iDigit = -iDigit;
        }

        if (iDigit > 3 && iDigit < 7)
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

    iRet = CountRange(iValue);

    printf("%d\n", iRet);

    return 0;
}