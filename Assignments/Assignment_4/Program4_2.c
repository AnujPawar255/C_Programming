/*
///////////////////////////////////////////////////////
// Program Name : Program4_2.c
// Description  : Check whether a number is even or odd
// Input        : One integer from the user
// Output       : Displays Even Number or Odd Number
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 24
//Output: Even Number

//Input: 17
//Output: Odd Number

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if ((iValue % 2) == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}