/*
///////////////////////////////////////////////////////
// Program Name : Program2_3.c
// Description  : Print Hello if number is less than 10,
//                otherwise print Demo
// Input        : One integer from the user
// Output       : Prints Hello or Demo
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

#include <stdio.h>

void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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