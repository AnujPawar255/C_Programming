/*
///////////////////////////////////////////////////////
// Program Name : Program19_5.c
// Description  : Accept number of rows and columns
//                and display an increasing triangular
//                number pattern
// Input        : Number of rows and columns
// Output       : Displays numbers in an upper
//                triangular pattern
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 4 4
//Output: 1   2   3   4
//            2   3   4
//                3   4
//                    4

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (j >= i)
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