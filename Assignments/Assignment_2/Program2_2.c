/*
///////////////////////////////////////////////////////
// Program Name : Program2_2.c
// Description  : Print the given number of stars
// Input        : One integer from the user
// Output       : Prints the specified number of *
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

#include <stdio.h>

void Display(int iNo)
{
    // Write Updater
    while(iNo > 0)
    {
        printf(" * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}