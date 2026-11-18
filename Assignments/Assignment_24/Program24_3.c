/*
///////////////////////////////////////////////////////
// Program Name : Program24_3.c
// Description  : Accept a string and a character from
//                the user and return the index of its
//                first occurrence in the string
// Input        : One string and one character
// Output       : Returns the index of the first occurrence
//                or -1 if the character is not found
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Marvellous Multi OS
//       M
//Output: 0

//Input: Marvellous Multi OS
//       W
//Output: -1

//Input: Marvellous Multi OS
//       e
//Output: 4

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            return iIndex;
        }

        iIndex++;
        str++;
    }

    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is : %d\n", iRet);

    return 0;
}