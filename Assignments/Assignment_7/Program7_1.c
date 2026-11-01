/*
///////////////////////////////////////////////////////
// Program Name : Program7_1.c
// Description  : Print the specified number of $ and *
//                symbols in an alternating pattern
// Input        : One integer from the user
// Output       : Displays $ and * alternately
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5
//Output: $ * $ * $ * $ * $ *

//Input: 3
//Output: $ * $ * $ *

//Input: -3
//Output: $ * $ * $ *

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}