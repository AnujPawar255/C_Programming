/*
///////////////////////////////////////////////////////
// Program Name : Program13_2.c
// Description  : Count the number of odd digits in
//                a given number
// Input        : One integer from the user
// Output       : Displays the count of odd digits
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 2395
//Output: 3

//Input: 1018
//Output: 2

//Input: -1018
//Output: 2

//Input: 8462
//Output: 0

#include <stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 != 0)
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

    iRet = CountOdd(iValue);

    printf("%d\n", iRet);

    return 0;
}