/*
///////////////////////////////////////////////////////
// Program Name : Program14_2.c
// Description  : Accept a number and display all its
//                factors in decreasing order
// Input        : One integer from the user
// Output       : Displays all proper factors in
//                decreasing order
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 12
//Output: 6  4  3  2  1

//Input: 13
//Output: 1

//Input: 10
//Output: 5  2  1

#include <stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}