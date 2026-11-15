/*
///////////////////////////////////////////////////////
// Program Name : Program21_2.c
// Description  : Accept number of rows and columns
//                and display a repeated number pattern
// Input        : Number of rows and columns
// Output       : Displays numbers from 1 to iCol
//                repeatedly in each row
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 4 3
//Output: 1   2   3
//        1   2   3
//        1   2   3
//        1   2   3

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", j);
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