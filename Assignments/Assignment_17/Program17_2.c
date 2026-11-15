/*
///////////////////////////////////////////////////////
// Program Name : Program17_2.c
// Description  : Accept number of rows and columns
//                and display alternate even and odd
//                number patterns
// Input        : Number of rows and columns
// Output       : Displays even numbers in odd rows
//                and odd numbers in even rows
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 4 5
//Output: 2  4  6  8  10
//        1  3  5  7  9
//        2  4  6  8  10
//        1  3  5  7  9

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d\t", j * 2);
            }
            else
            {
                printf("%d\t", (j * 2) - 1);
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