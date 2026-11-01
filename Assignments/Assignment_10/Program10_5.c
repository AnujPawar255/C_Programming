/*
///////////////////////////////////////////////////////
// Program Name : Program10_5.c
// Description  : Convert area from square feet into
//                square metres
// Input        : Area in square feet
// Output       : Displays area in square metres
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5
//Output: 0.464515

//Input: 7
//Output: 0.650321

#include <stdio.h>

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    dArea = iValue * 0.092903;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is %.6f\n", dRet);

    return 0;
}