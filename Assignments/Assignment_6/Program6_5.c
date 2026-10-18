/*
///////////////////////////////////////////////////////
// Program Name : Program6_5.c
// Description  : Calculate employee bonus based on
//                monthly salary and years of service
// Input        : Monthly salary and years of service
// Output       : Displays the calculated bonus or an
//                invalid input message
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 30000 12
//Output: Bonus = 4500.00

//Input: 20000 7
//Output: Bonus = 2000.00

//Input: 10000 2
//Output: Bonus = 500.00

//Input: -5000 6
//Output: Invalid Input

//Input: 25000 -2
//Output: Invalid Input

#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    if (iYears > 10)
    {
        fBonus = fSalary * 15.0f / 100.0f;
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 10.0f / 100.0f;
    }
    else
    {
        fBonus = fSalary * 5.0f / 100.0f;
    }

    printf("Bonus = %.2f\n", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: \n");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}