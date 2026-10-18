/*
///////////////////////////////////////////////////////
// Program Name : Program4_3.c
// Description  : Find the greater of two numbers
// Input        : Two integers from the user
// Output       : Displays the greater number or states
//                that both numbers are equal
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 10 20
//Output: 20 is Greater

//Input: 50 30
//Output: 50 is Greater

//Input: 15 15
//Output: Both Numbers Are Equal

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if (iSecond > iFirst)
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: \n");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}