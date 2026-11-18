/*
///////////////////////////////////////////////////////
// Program Name : Program24_1.c
// Description  : Accept a string and a character from
//                the user and check whether the
//                character is present in the string
// Input        : One string and one character
// Output       : Displays TRUE if character is found,
//                otherwise FALSE
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Marvellous Multi OS
//       e
//Output: TRUE

//Input: Marvellous Multi OS
//       w
//Output: FALSE

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%19[^\n]", arr);

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if (bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}