/*
///////////////////////////////////////////////////////
// Program Name : Program9_3.c
// Description  : Calculate the even factorial of a number
// Input        : One integer from the user
// Output       : Displays the product of even numbers
//                up to the given number
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5
//Output: 8

//Input: -5
//Output: 8

//Input: 10
//Output: 3840

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}