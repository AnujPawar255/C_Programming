/*
///////////////////////////////////////////////////////
// Program Name : Program27_4.c
// Description  : Accept a string and check whether
//                it contains any vowels
// Input        : One string from the user
// Output       : Displays Contains Vowel if a vowel
//                is present, otherwise There is no Vowel
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: marvellous
//Output: TRUE

//Input: Demo
//Output: TRUE

//Input: xyz
//Output: FALSE

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' ||
            *str == 'i' || *str == 'o' ||
            *str == 'u' || *str == 'A' ||
            *str == 'E' || *str == 'I' ||
            *str == 'O' || *str == 'U')
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
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%19[^\n]", arr);

    bRet = ChkVowel(arr);

    if (bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}