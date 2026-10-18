/*
///////////////////////////////////////////////////////
// Program Name : Program1_5.c
// Description  : Print the specified number of stars
// Input        : One integer from the user
// Output       : Prints the given number of *
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}