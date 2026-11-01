/*
///////////////////////////////////////////////////////
// Program Name : Program7_3.c
// Description  : Accept a number and print numbers
//                from its negative value to positive value
// Input        : One integer from the user
// Output       : Prints numbers from -N to +N
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 4
//Output: -4  -3  -2  -1  0  1  2  3  4

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
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