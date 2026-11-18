/*
///////////////////////////////////////////////////////
// Program Name : Program24_2.c
// Description  : Accept a string and a character from
//                the user and count its frequency
// Input        : One string and one character
// Output       : Displays the frequency of the character
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Marvellous Multi OS
//       M
//Output: 2

//Input: Marvellous Multi OS
//       W
//Output: 0

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCount++;
        }

        str++;
    }

    return iCount;
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is : %d\n", iRet);

    return 0;
}