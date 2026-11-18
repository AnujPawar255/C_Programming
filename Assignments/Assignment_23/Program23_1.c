/*
///////////////////////////////////////////////////////
// Program Name : Program23_1.c
// Description  : Accept a string and convert it into
//                lowercase
// Input        : One string from the user
// Output       : Displays the string in lowercase
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Marvellous Multi OS
//Output: marvellous multi os

#include <stdio.h>

void strlwrx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%19[^\n]", arr);

    strlwrx(arr);

    printf("Modified string is : %s\n", arr);

    return 0;
}