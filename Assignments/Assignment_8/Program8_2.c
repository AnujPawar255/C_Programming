/*
///////////////////////////////////////////////////////
// Program Name : Program8_2.c
// Description  : Accept a single digit number and print
//                its corresponding word
// Input        : One integer from the user
// Output       : Displays the number in words or
//                Invalid Number
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 9
//Output: Nine

//Input: -3
//Output: Three

//Input: 12
//Output: Invalid Number

#include <stdio.h>

void Display(int iNo)
{
    if (iNo < -9 || iNo > 9)
    {
        printf("Invalid Number\n");
        return;
    }

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    switch (iNo)
    {
        case 0:
            printf("Zero\n");
            break;

        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;

        case 3:
            printf("Three\n");
            break;

        case 4:
            printf("Four\n");
            break;

        case 5:
            printf("Five\n");
            break;

        case 6:
            printf("Six\n");
            break;

        case 7:
            printf("Seven\n");
            break;

        case 8:
            printf("Eight\n");
            break;

        case 9:
            printf("Nine\n");
            break;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}