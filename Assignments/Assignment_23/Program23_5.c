/*
///////////////////////////////////////////////////////
// Program Name : Program23_5.c
// Description  : Accept a string and count the number
//                of white spaces in that string
// Input        : One string from the user
// Output       : Displays the total number of white spaces
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Marvellous
//Output: 0

//Input: Marvellous Infosystems
//Output: 1

//Input: Marvellous Infosystems by Piyush Manohar Khairnnar
//Output: 5

#include <stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%99[^\n]", arr);

    iRet = CountWhite(arr);

    printf("%d\n", iRet);

    return 0;
}