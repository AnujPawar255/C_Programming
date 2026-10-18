/*
///////////////////////////////////////////////////////
// Program Name : Program3_4.c
// Description  : Convert the case of a character
// Input        : One character from the user
// Output       : Displays the character in opposite case
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

#include <stdio.h>

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character :\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}