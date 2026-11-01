/*
///////////////////////////////////////////////////////
// Program Name : Program7_2.c
// Description  : Accept a number and print numbers
//                from 1 up to that number
// Input        : One integer from the user
// Output       : Prints numbers from 1 to the given number
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 8
//Output: 1  2  3  4  5  6  7  8

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
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