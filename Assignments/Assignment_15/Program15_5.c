/*
///////////////////////////////////////////////////////
// Program Name : Program15_5.c
// Description  : Calculate percentage using total
//                marks and obtained marks
// Input        : Total marks and obtained marks
// Output       : Displays the calculated percentage
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 1000 745
//Output: 74.5%

#include <stdio.h>

float Percentage(int iTotal, int iObtained)
{
    float fPercentage = 0.0f;

    if (iTotal == 0)
    {
        return -1.0f;
    }

    fPercentage = ((float)iObtained / iTotal) * 100;

    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks:\n");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks:\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    if (fRet == -1.0f)
    {
        printf("Invalid total marks\n");
    }
    else
    {
        printf("Percentage is %.1f%%\n", fRet);
    }

    return 0;
}