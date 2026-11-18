/*
///////////////////////////////////////////////////////
// Program Name : Program26_2.c
// Description  : Accept a character and toggle its case.
//                Display other characters as they are.
// Input        : One character from the user
// Output       : Displays the character in opposite case
//                or displays it unchanged
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Q
//Output: q

//Input: m
//Output: M

//Input: 4
//Output: 4

//Input: %
//Output: %

#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n", ch + 32);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c\n", ch - 32);
    }
    else
    {
        printf("%c\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}