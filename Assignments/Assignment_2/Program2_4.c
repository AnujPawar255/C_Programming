/*
///////////////////////////////////////////////////////
// Program Name : Program2_4.c
// Description  : Display the first number the specified
//                number of times
// Input        : Two integers
// Output       : Prints the first number repeatedly
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input : 12  5
//Output: 12  12  12  12  12

//Input : -2  3
//Output: -2  -2  -2

//Input : 21  -3
//Output: 21  21  21

//Input : -2  0
//Output:

#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    // Write Updater
    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    printf("Enter frequency: \n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}