/*
///////////////////////////////////////////////////////
// Program Name : Program22_2.c
// Description  : Accept a number and display numbers
//                in decreasing order with # symbols
// Input        : One integer from the user
// Output       : Displays numbers from N to 1,
//                separated by # symbols
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5
//Output: 5  #  4  #  3  #  2  #  1  #

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
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