/*
///////////////////////////////////////////////////////
// Program Name : Program27_5.c
// Description  : Accept a string from the user and
//                display it in reverse order
// Input        : One string from the user
// Output       : Displays the string in reverse order
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Marvellous
//Output: suollevraM

#include <stdio.h>

void Reverse(char *str)
{
    int iLength = 0;
    int iCnt = 0;

    while (str[iLength] != '\0')
    {
        iLength++;
    }

    for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        printf("%c", str[iCnt]);
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%19[^\n]", arr);

    Reverse(arr);

    return 0;
}