/*
///////////////////////////////////////////////////////
// Program Name : Program20_1.c
// Description  : Accept number of rows and columns
//                and display a diagonal pattern using
//                * and # symbols
// Input        : Number of rows and columns
// Output       : Displays # on the right-to-left
//                diagonal and * in other positions
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 4 4
//Output: *   *   *   #
//        *   *   #   *
//        *   #   *   *
//        #   *   *   *

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i + j == iCol + 1)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}