/*
///////////////////////////////////////////////////////
// Program Name : Program22_4.c
// Description  : Accept a number and display a pattern
//                containing #, numbers and * symbols
// Input        : One integer from the user
// Output       : Displays # followed by numbers and *
//                symbols in sequence
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 4
//Output: #  1  *  #  2  *  #  3  *  #  4  *

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t", iCnt);
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