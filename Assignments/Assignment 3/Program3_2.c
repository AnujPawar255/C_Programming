/*
///////////////////////////////////////////////////////
// Program Name : Program3_2.c
// Description  : Display the factors of a number,
//                excluding the number itself
// Input        : One integer from the user
// Output       : Prints the proper factors of the number
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo / 2; i++)
    {
        if ((iNo % i) == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}