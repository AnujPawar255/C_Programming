/*
///////////////////////////////////////////////////////
// Program Name : Program13_1.c
// Description  : Count the number of even digits in
//                a given number
// Input        : One integer from the user
// Output       : Displays the count of even digits
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 2395
//Output: 1

//Input: 1018
//Output: 2

//Input: -1018
//Output: 2

//Input: 8462
//Output: 4

#include <stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo == 0)
    {
        return 1;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
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

    iRet = CountEven(iValue);

    printf("%d\n", iRet);

    return 0;
}