/*
///////////////////////////////////////////////////////
// Program Name : Program21_5.c
// Description  : Accept number of rows and columns
//                and display a number pattern in which
//                each row contains the same number
// Input        : Number of rows and columns
// Output       : Displays row numbers repeatedly
//                according to the number of columns
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 3 4
//Output: 1   1   1   1
//        2   2   2   2
//        3   3   3   3

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", i);
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