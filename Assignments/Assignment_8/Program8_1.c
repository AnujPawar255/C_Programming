/*
///////////////////////////////////////////////////////
// Program Name : Program8_1.c
// Description  : Classify a number as Small, Medium,
//                or Large based on its value
// Input        : One integer from the user
// Output       : Displays Small, Medium, or Large
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 25
//Output: Small

//Input: 75
//Output: Medium

//Input: 150
//Output: Large

#include <stdio.h>

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if (iNo <= 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}