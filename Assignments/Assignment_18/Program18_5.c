/*
///////////////////////////////////////////////////////
// Program Name : Program18_5.c
// Description  : Accept number of rows and columns
//                and display a rectangular pattern
//                with numbers on the boundary and
//                stars in the inner positions
// Input        : Number of rows and columns
// Output       : Displays numbers on the boundary
//                and * inside the rectangle
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 4 4
//Output: 1   2   3   4
//        1   *   *   4
//        1   *   *   4
//        1   2   3   4

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if ((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
            {
                printf("%d\t", j);
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