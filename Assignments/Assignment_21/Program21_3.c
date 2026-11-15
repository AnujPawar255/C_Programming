/*
///////////////////////////////////////////////////////
// Program Name : Program21_3.c
// Description  : Accept number of rows and columns
//                and display numbers in decreasing order
// Input        : Number of rows and columns
// Output       : Displays numbers from iCol to 1
//                repeatedly in each row
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 3 5
//Output: 5  4  3  2  1
//        5  4  3  2  1
//        5  4  3  2  1

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = iCol; j >= 1; j--)
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