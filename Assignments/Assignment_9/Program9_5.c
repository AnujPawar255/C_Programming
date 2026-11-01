/*
///////////////////////////////////////////////////////
// Program Name : Program9_5.c
// Description  : Calculate the difference between even
//                factorial and odd factorial
// Input        : One integer from the user
// Output       : Displays the difference between even
//                factorial and odd factorial
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5
//Output: -7  (8 - 15)

//Input: -5
//Output: -7  (8 - 15)

//Input: 10
//Output: 2895  (3840 - 945)

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iOddFact = iOddFact * iCnt;
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    return 0;
}