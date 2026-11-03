/*
///////////////////////////////////////////////////////
// Program Name : Program12_1.c
// Description  : Accept a number and display its digits
//                in reverse order
// Input        : One integer from the user
// Output       : Displays the digits in reverse order
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 2395
//Output: 5
//        9
//        3
//        2

//Input: 1018
//Output: 8
//        1
//        0
//        1

//Input: -1018
//Output: 8
//        1
//        0
//        1

//Input: 9000
//Output: 0
//        0
//        0
//        9

#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        printf("0\n");
        return;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        printf("%d\n", iDigit);

        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}