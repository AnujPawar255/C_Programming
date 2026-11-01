/*
///////////////////////////////////////////////////////
// Program Name : Program8_3.c
// Description  : Calculate the factorial of a number
// Input        : One integer from the user
// Output       : Displays the factorial of the number
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5
//Output: Factorial of number is 120

//Input: -5
//Output: Factorial of number is 120

//Input: 4
//Output: Factorial of number is 24

#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
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

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return 0;
}