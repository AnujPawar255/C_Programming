/*
///////////////////////////////////////////////////////
// Program Name : Program16_1.c
// Description  : Accept number of rows and columns
//                and display an alphabet pattern
// Input        : Number of rows and columns
// Output       : Displays alphabets from A onwards
//                in each row
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 4 4
//Output: A  B  C  D
//        A  B  C  D
//        A  B  C  D
//        A  B  C  D

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            printf("%c\t", 'A' + j);
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