/*
///////////////////////////////////////////////////////
// Program Name : Program6_1.c
// Description  : Calculate the electricity bill using
//                slab-wise rates
// Input        : Electricity units consumed
// Output       : Displays the total electricity bill
//                or an invalid consumption message
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 80
//Output: Bill = 400.00

//Input: 150
//Output: Bill = 850.00

//Input: 250
//Output: Bill = 1700.00

//Input: -5
//Output: Invalid Unit Consumption

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits < 0)
    {
        printf("Invalid Unit Consumption\n");
        return;
    }

    if (iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f)
                + ((iUnits - 200) * 10.0f);
    }

    printf("Bill = %.2f\n", fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: \n");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}