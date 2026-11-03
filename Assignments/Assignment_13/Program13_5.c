/*
///////////////////////////////////////////////////////
// Program Name : Program13_5.c
// Description  : Calculate the difference between the
//                sum of even digits and odd digits
// Input        : One integer from the user
// Output       : Returns the difference between the
//                sum of even digits and odd digits
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 2395
//Output: -15 (2 - 17)

//Input: 1018
//Output: 6 (8 - 2)

//Input: 8440
//Output: 16 (16 - 0)

//Input: 5733
//Output: -18 (0 - 18)

#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    long long iNum = iNo;

    if (iNum < 0)
    {
        iNum = -iNum;
    }

    while (iNum != 0)
    {
        iDigit = iNum % 10;

        if (iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNum = iNum / 10;
    }

    return (iEvenSum - iOddSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}