/*
///////////////////////////////////////////////////////
// Program Name : Program5_2.c
// Description  : Check whether a year is a leap year
// Input        : One year from the user
// Output       : Displays Leap Year, Not a Leap Year,
//                or Invalid Year
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 2024
//Output: Leap Year

//Input: 1900
//Output: Not a Leap Year

//Input: 2000
//Output: Leap Year

//Input: -5
//Output: Invalid Year

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if (iYear <= 0)
    {
        printf("Invalid Year\n");
    }
    else if ((iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: \n");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}