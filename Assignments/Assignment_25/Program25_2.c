/*
///////////////////////////////////////////////////////
// Program Name : Program25_2.c
// Description  : Accept a character and check whether
//                it is a capital alphabet or not
// Input        : One character from the user
// Output       : Displays TRUE if capital alphabet,
//                otherwise FALSE
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: F
//Output: TRUE

//Input: d
//Output: FALSE

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if (bRet == TRUE)
    {
        printf("It is Capital Character\n");
    }
    else
    {
        printf("It is not a Capital Character\n");
    }

    return 0;
}