/*
///////////////////////////////////////////////////////
// Program Name : Program9_4.c
// Description  : Calculate the odd factorial of a number
// Input        : One integer from the user
// Output       : Displays the product of odd numbers
//                up to the given number
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5
//Output: 15

//Input: -5
//Output: 15

//Input: 10
//Output: 945

#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);

    return 0;
}