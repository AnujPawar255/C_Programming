/*
///////////////////////////////////////////////////////
// Program Name : Program6_3.c
// Description  : Calculate shopping discount and final
//                payable amount based on purchase value
// Input        : Purchase amount from the user
// Output       : Displays the final payable amount or
//                an invalid amount message
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 800
//Output: Payable Amount = 800.00

//Input: 2000
//Output: Payable Amount = 1800.00

//Input: 6000
//Output: Payable Amount = 4800.00

//Input: -500
//Output: Invalid Purchase Amount

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Purchase Amount\n");
        return;
    }

    if (fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if (fAmount < 5000)
    {
        fDiscount = 10.0f;
    }
    else
    {
        fDiscount = 20.0f;
    }

    fFinalAmount = fAmount - (fAmount * fDiscount / 100.0f);

    printf("Payable Amount = %.2f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: \n");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}