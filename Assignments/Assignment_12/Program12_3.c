/*
///////////////////////////////////////////////////////
// Program Name : Program12_3.c
// Description  : Count the frequency of digit 2 in a
//                given number
// Input        : One integer from the user
// Output       : Displays the frequency of digit 2
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 2395
//Output: 1

//Input: 1018
//Output: 0

//Input: 9000
//Output: 0

//Input: 922432
//Output: 3

#include <stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 2 || iDigit == -2)
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

    iRet = CountTwo(iValue);

    printf("%d\n", iRet);

    return 0;
}