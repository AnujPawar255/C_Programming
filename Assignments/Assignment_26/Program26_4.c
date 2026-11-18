/*
///////////////////////////////////////////////////////
// Program Name : Program26_4.c
// Description  : Accept a character and check whether
//                it is a special symbol or not
// Input        : One character from the user
// Output       : Displays TRUE if it is a special
//                symbol, otherwise FALSE
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: %
//Output: TRUE

//Input: d
//Output: FALSE

//Input: @
//Output: TRUE

//Input: 5
//Output: FALSE

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if (ch == '!' || ch == '@' || ch == '#' ||
        ch == '$' || ch == '%' || ch == '^' ||
        ch == '&' || ch == '*')
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
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == TRUE)
    {
        printf("It is special Character\n");
    }
    else
    {
        printf("It is not a special Character\n");
    }

    return 0;
}