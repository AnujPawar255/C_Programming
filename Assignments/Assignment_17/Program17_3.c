/*
///////////////////////////////////////////////////////
// Program Name : Program17_3.c
// Description  : Accept number of rows and columns
//                and display alternate alphabet and
//                number patterns
// Input        : Number of rows and columns
// Output       : Displays lowercase alphabets in odd
//                rows and numbers in even rows
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5 5
//Output: a  b  c  d  e
//        1  2  3  4  5
//        a  b  c  d  e
//        1  2  3  4  5
//        a  b  c  d  e

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
                printf("%c\t", 'a' + j - 1);
            }
            else
            {
                printf("%d\t", j);
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