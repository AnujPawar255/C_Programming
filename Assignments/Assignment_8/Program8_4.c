/*
///////////////////////////////////////////////////////
// Program Name : Program8_4.c
// Description  : Accept a number and display its
//                multiplication table up to 10
// Input        : One integer from the user
// Output       : Displays the first 10 multiples
//                of the given number
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 2
//Output: 2  4  6  8  10  12  14  16  18  20

//Input: 5
//Output: 5  10  15  20  25  30  35  40  45  50

//Input: -5
//Output: 5  10  15  20  25  30  35  40  45  50

#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}