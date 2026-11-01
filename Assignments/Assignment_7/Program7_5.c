/*
///////////////////////////////////////////////////////
// Program Name : Program7_5.c
// Description  : Accept a number and print its first
//                five multiples
// Input        : One integer from the user
// Output       : Prints the first five multiples of N
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 4
//Output: 4  8  12  16  20

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}