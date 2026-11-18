/*
///////////////////////////////////////////////////////
// Program Name : Program25_4.c
// Description  : Accept a character and check whether
//                it is a lowercase alphabet or not
// Input        : One character from the user
// Output       : Displays TRUE if lowercase alphabet,
//                otherwise FALSE
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: g
//Output: TRUE

//Input: D
//Output: FALSE

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if (ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if (bRet == TRUE)
    {
        printf("It is Small case Character\n");
    }
    else
    {
        printf("It is not a Small case Character\n");
    }

    return 0;
}