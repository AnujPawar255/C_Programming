/*
///////////////////////////////////////////////////////
// Program Name : Program22_1.c
// Description  : Accept a number and display the
//                corresponding uppercase alphabets
// Input        : One integer from the user
// Output       : Displays alphabets starting from A
// Author       : Anuj Hemant Pawar
// Date         : 15/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5
//Output: A  B  C  D  E

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t", 'A' + iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}