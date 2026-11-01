/*
///////////////////////////////////////////////////////
// Program Name : Program9_2.c
// Description  : Convert US dollars into Indian rupees
//                at the rate of 1 USD = 70 INR
// Input        : Amount in US dollars
// Output       : Displays the corresponding amount
//                in Indian rupees
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 10
//Output: 700

//Input: 3
//Output: 270

//Input: 1200
//Output: 84000

#include <stdio.h>

int DollarToINR(int iNo)
{
    int iINR = 0;

    iINR = iNo * 70;

    return iINR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD:\n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}