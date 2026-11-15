/*
///////////////////////////////////////////////////////
// Program Name : Program17_1.c
// Description  : Accept number of rows and columns
//                and display consecutive digits from
//                1 to 9 repeatedly
// Input        : Number of rows and columns
// Output       : Displays repeating digits in matrix
//                format from 1 to 9
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 4 4
//Output: 1  2  3  4
//        5  6  7  8
//        9  1  2  3
//        4  5  6  7

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

            if (iCnt > 9)
            {
                iCnt = 1;
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