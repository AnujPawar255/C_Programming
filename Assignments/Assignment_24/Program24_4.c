/*
///////////////////////////////////////////////////////
// Program Name : Program24_4.c
// Description  : Accept a string and a character from
//                the user and return the index of its
//                last occurrence in the string
// Input        : One string and one character
// Output       : Returns the index of the last occurrence
//                or -1 if the character is not found
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Marvellous Multi OS
//       M
//Output: 11

//Input: Marvellous Multi OS
//       W
//Output: -1

//Input: Marvellous Multi OS
//       e
//Output: 4

#include <stdio.h>

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iLastIndex = -1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iLastIndex = iIndex;
        }

        iIndex++;
        str++;
    }

    return iLastIndex;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%19[^\n]", arr);

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is : %d\n", iRet);

    return 0;
}