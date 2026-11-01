/*
///////////////////////////////////////////////////////
// Program Name : Program9_1.c
// Description  : Accept a number and print stars (*)
//                followed by hash (#) symbols
// Input        : One integer from the user
// Output       : Displays the specified number of *
//                and # symbols
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5
//Output: * * * * * # # # # #

//Input: 6
//Output: * * * * * * # # # # # #

//Input: -5
//Output: * * * * * # # # # #

//Input: 2
//Output: * * # #

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}