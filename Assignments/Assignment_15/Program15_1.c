/*
///////////////////////////////////////////////////////
// Program Name : Program15_1.c
// Description  : Accept a full name from the user and
//                print that name
// Input        : Full name from the user
// Output       : Displays the entered full name
// Author       : Anuj Hemant Pawar
// Date         : 03/11/2026
///////////////////////////////////////////////////////
*/

//Input: Anuj Pawar
//Output: Anuj Pawar

#include <stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name:\n");
    scanf(" %c", Name);

    printf("Your name is %s\n", Name);

    return 0;
}