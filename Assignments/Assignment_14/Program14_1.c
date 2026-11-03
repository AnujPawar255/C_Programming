/*
///////////////////////////////////////////////////////
// Program Name : Program14_1.c
// Description  : Calculate the multiplication of all
//                proper factors of a given number
// Input        : One integer from the user
// Output       : Displays the multiplication of factors
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 12
//Output: 144

//Input: 13
//Output: 1

//Input: 10
//Output: 10

#include <stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        return 0;
    }

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return 0;
}