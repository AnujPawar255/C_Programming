/*
///////////////////////////////////////////////////////
// Program Name : Program7_4.c
// Description  : Accept a number and print all odd
//                numbers up to N
// Input        : One integer from the user
// Output       : Prints all odd numbers up to N
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 18
//Output: 1  3  5  7  9  11  13  15  17

#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}