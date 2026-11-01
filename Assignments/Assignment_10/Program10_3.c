/*
///////////////////////////////////////////////////////
// Program Name : Program10_3.c
// Description  : Convert distance from kilometres
//                into metres (1 KM = 1000 Metres)
// Input        : Distance in kilometres
// Output       : Displays distance in metres
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5
//Output: 5000

//Input: 12
//Output: 12000

#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance:\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is %d\n", iRet);

    return 0;
}