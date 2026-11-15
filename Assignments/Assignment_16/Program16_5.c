/*
///////////////////////////////////////////////////////
// Program Name : Program16_5.c
// Description  : Accept number of rows and columns
//                and display consecutive numbers
//                in row-wise order
// Input        : Number of rows and columns
// Output       : Displays consecutive numbers in a
//                matrix format
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 3 4
//Output: 1  2  3  4
//        5  6  7  8
//        9  10 11 12

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 1;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCnt);
            iCnt++;
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