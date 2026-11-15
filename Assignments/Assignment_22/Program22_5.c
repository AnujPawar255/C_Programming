/*
///////////////////////////////////////////////////////
// Program Name : Program22_5.c
// Description  : Accept a number and display the first
//                N even numbers
// Input        : One integer from the user
// Output       : Displays the first N even numbers
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 8
//Output: 2  4  6  8  10  12  14  16

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
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