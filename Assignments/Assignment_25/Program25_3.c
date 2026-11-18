/*
///////////////////////////////////////////////////////
// Program Name : Program25_3.c
// Description  : Accept a character and check whether
//                it is a digit or not
// Input        : One character from the user
// Output       : Displays TRUE if digit, otherwise FALSE
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: 7
//Output: TRUE

//Input: d
//Output: FALSE

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if (bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return 0;
}