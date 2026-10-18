/*
///////////////////////////////////////////////////////
// Program Name : Program3_1.c
// Description  : Print the first N even numbers
// Input        : One integer from the user
// Output       : Prints the first N even numbers
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        return;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}