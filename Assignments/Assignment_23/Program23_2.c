/*
///////////////////////////////////////////////////////
// Program Name : Program23_2.c
// Description  : Accept a string and convert it into
//                uppercase
// Input        : One string from the user
// Output       : Displays the string in uppercase
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Marvellous Multi OS
//Output: MARVELLOUS MULTI OS

#include <stdio.h>

void struprx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
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

    struprx(arr);

    printf("Modified string is : %s\n", arr);

    return 0;
}