/*
///////////////////////////////////////////////////////
// Program Name : Program23_3.c
// Description  : Accept a string and toggle the case
//                of each character
// Input        : One string from the user
// Output       : Displays the string with toggled case
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Marvellous Multi OS
//Output: mARVELLOUS mULTI os

#include <stdio.h>

void strtogglex(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%19[^\n]", arr);

    strtogglex(arr);

    printf("Modified string is : %s\n", arr);

    return 0;
}