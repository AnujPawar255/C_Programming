/*
///////////////////////////////////////////////////////
// Program Name : Program23_4.c
// Description  : Accept a string and display only
//                the digits present in that string
// Input        : One string from the user
// Output       : Displays only the digits from the string
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: marve89llous121
//Output: 89121

//Input: Demo
//Output: No digits

#include <stdio.h>

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }

        str++;
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%19[^\n]", arr);

    DisplayDigit(arr);

    return 0;
}