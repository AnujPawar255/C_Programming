/*
///////////////////////////////////////////////////////
// Program Name : Program12_4.c
// Description  : Count the frequency of digit 4 in a
//                given number
// Input        : One integer from the user
// Output       : Displays the frequency of digit 4
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 2395
//Output: 0

//Input: 1018
//Output: 0

//Input: 9440
//Output: 2

//Input: 922432
//Output: 1

#include <stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 4 || iDigit == -4)
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

    iRet = CountFour(iValue);

    printf("%d\n", iRet);

    return 0;
}