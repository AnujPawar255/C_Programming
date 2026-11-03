/*
///////////////////////////////////////////////////////
// Program Name : Program15_4.c
// Description  : Accept three numbers and calculate
//                their multiplication, ignoring zeros
// Input        : Three integers from the user
// Output       : Displays the multiplication of
//                non-zero numbers
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5 4 7
//Output: 140

//Input: 5 0 7
//Output: 35

//Input: 5 0 0
//Output: 5

//Input: 0 0 0
//Output: 0

#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;

    if (iNo1 != 0)
    {
        iMult = iMult * iNo1;
    }

    if (iNo2 != 0)
    {
        iMult = iMult * iNo2;
    }

    if (iNo3 != 0)
    {
        iMult = iMult * iNo3;
    }

    if (iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers:\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is %d\n", iRet);

    return 0;
}