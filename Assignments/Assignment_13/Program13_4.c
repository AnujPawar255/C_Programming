/*
///////////////////////////////////////////////////////
// Program Name : Program13_4.c
// Description  : Calculate the multiplication of all
//                non-zero digits in a given number
// Input        : One integer from the user
// Output       : Displays the multiplication of digits
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 2395
//Output: 270

//Input: 1018
//Output: 8

//Input: 9440
//Output: 144

//Input: 922432
//Output: 864

#include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    int iCount = 0;
    long long iNum = iNo;

    if (iNum < 0)
    {
        iNum = -iNum;
    }

    while (iNum != 0)
    {
        iDigit = iNum % 10;

        if (iDigit != 0)
        {
            iMult = iMult * iDigit;
            iCount++;
        }

        iNum = iNum / 10;
    }

    if (iCount == 0)
    {
        return 0;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}