/*
///////////////////////////////////////////////////////
// Program Name : Program22_3.c
// Description  : Accept a number and display an
//                alternate number and star pattern
// Input        : One integer from the user
// Output       : Displays numbers from 1 to N,
//                separated by * symbols
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5
//Output: 1  *  2  *  3  *  4  *  5  *

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}