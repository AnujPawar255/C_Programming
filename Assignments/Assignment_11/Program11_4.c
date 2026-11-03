/*
///////////////////////////////////////////////////////
// Program Name : Program11_4.c
// Description  : Calculate the sum of all even numbers
//                within a given positive range
// Input        : Starting point and ending point
// Output       : Returns the sum of even numbers
//                or displays Invalid range
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 23 30
//Output: Addition is 108

//Input: 10 18
//Output: Addition is 70

//Input: -10 2
//Output: Invalid range

//Input: 90 18
//Output: Invalid range

#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if (iStart <= 0 || iEnd <= 0 || iStart > iEnd)
    {
        return -1;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point:\n");
    scanf("%d", &iValue1);

    printf("Enter ending point:\n");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if (iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}