/*
///////////////////////////////////////////////////////
// Program Name : Program16_3.c
// Description  : Accept number of rows and columns
//                and display the row alphabet repeatedly
// Input        : Number of rows and columns
// Output       : Displays alphabets row-wise, repeated
//                according to the number of columns
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 3 5
//Output: A  A  A  A  A
//        B  B  B  B  B
//        C  C  C  C  C

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            printf("%c\t", 'A' + i);
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