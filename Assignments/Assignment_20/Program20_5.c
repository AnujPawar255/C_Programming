/*
///////////////////////////////////////////////////////
// Program Name : Program20_5.c
// Description  : Accept number of rows and columns
//                and display a rectangular pattern
//                containing boundary numbers and
//                diagonal numbers
// Input        : Number of rows and columns
// Output       : Displays boundary numbers and
//                diagonal numbers in matrix format
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 4 4
//Output: 1   2   3   4   5   5
//        1   2               5
//        1       3           5
//        1           4       5
//        1   2   3   4   5   5

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow + 1; i++)
    {
        for (j = 1; j <= iCol + 1; j++)
        {
            if (i == 1 || i == iRow + 1 ||
                j == 1 || j == iCol + 1 || i == j)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
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