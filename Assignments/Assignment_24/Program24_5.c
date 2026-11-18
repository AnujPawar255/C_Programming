/*
///////////////////////////////////////////////////////
// Program Name : Program24_5.c
// Description  : Accept a string from the user and
//                reverse the string in place
// Input        : One string from the user
// Output       : Displays the reversed string
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: abcd
//Output: dcba

//Input: abba
//Output: abba

#include <stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while (*end != '\0')
    {
        end++;
    }

    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%19[^\n]", arr);

    StrRevX(arr);

    printf("Modified string is : %s\n", arr);

    return 0;
}