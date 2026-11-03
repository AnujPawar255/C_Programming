/*
///////////////////////////////////////////////////////
// Program Name : Program11_3.c
// Description  : Accept a range and calculate the sum
//                of all numbers between the starting
//                and ending points
// Input        : Starting point and ending point
// Output       : Returns the sum of all numbers in range
//                or displays Invalid range
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 23 30
//Output: Addition is 212

//Input: 10 18
//Output: Addition is 126

//Input: -10 2
//Output: Invalid range

//Input: 90 18
//Output: Invalid range

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if (iStart <= 0 || iEnd <= 0 || iStart > iEnd)
    {
        return -1;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
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

    iRet = RangeSum(iValue1, iValue2);

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