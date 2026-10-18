/*
///////////////////////////////////////////////////////
// Program Name : Program3_3.c
// Description  : Display all even factors of a number
// Input        : One integer from the user
// Output       : Prints the even factors of the number
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input : 36

//Output : 2    6    12    18

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo / 2; i++)
    {
        if ((iNo % i == 0) && (i % 2 == 0))
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

    DisplayEvenFactor(iValue);

    return 0;
}