/*
///////////////////////////////////////////////////////
// Program Name : Program1_3.c
// Description  : Print numbers from 5 to 1
// Input        : No input
// Output       : Prints numbers from 5 to 1
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

#include <stdio.h>

void Display()
{
    int i = 5;

    while(i >= 1)
    {
        printf("%d ", i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}