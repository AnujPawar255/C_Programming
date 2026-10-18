/*
///////////////////////////////////////////////////////
// Program Name : Program5_5.c
// Description  : Identify the type of a character
// Input        : One character from the user
// Output       : Displays uppercase alphabet, lowercase
//                alphabet, digit, or special character
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: A
//Output: Uppercase Alphabet

//Input: m
//Output: Lowercase Alphabet

//Input: 7
//Output: Digit

//Input: @
//Output: Special Character

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if (cValue >= '0' && cValue <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: \n");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}