/*
///////////////////////////////////////////////////////
// Program Name : Program6_4.c
// Description  : Check whether three sides form a valid
//                triangle
// Input        : Three integers representing side lengths
// Output       : Displays Valid Triangle or Invalid Triangle
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 3 4 5
//Output: Valid Triangle

//Input: 1 2 3
//Output: Invalid Triangle

//Input: 0 4 5
//Output: Invalid Triangle

#include <stdio.h>
#include <stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if ((iSide1 > 0) && (iSide2 > 0) && (iSide3 > 0) && ((long long)iSide1 + iSide2 > iSide3) &&
        ((long long)iSide1 + iSide3 > iSide2) && ((long long)iSide2 + iSide3 > iSide1))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: \n");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}