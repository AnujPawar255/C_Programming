/*
///////////////////////////////////////////////////////
// Program Name : Program26_5.c
// Description  : Accept a character and display its
//                ASCII value in decimal, octal and
//                hexadecimal formats
// Input        : One character from the user
// Output       : Displays ASCII values in decimal,
//                octal and hexadecimal formats
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: A
//Output: Decimal       65
//        Octal         0101
//        Hexadecimal   0X41

#include <stdio.h>

void Display(char ch)
{
    printf("Decimal\t\t%d\n", (unsigned char)ch);

    printf("Octal\t\t%#o\n", (unsigned char)ch);

    printf("Hexadecimal\t%#X\n", (unsigned char)ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}