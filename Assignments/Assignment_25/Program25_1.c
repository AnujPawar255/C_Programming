/*
///////////////////////////////////////////////////////
// Program Name : Program25_1.c
// Description  : Accept a character and check whether
//                it is an alphabet or not
// Input        : One character from the user
// Output       : Displays TRUE if alphabet, otherwise
//                FALSE
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: F
//Output: TRUE

//Input: &
//Output: FALSE

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if (bRet == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return 0;
}