/*
///////////////////////////////////////////////////////
// Program Name : Program5_1.c
// Description  : Find the greatest of three numbers
// Input        : Three integers from the user
// Output       : Displays the greatest number
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 10 50 30
//Output: 50 is Greatest

//Input: 40 40 20
//Output: 40 is Greatest

//Input: 15 15 15
//Output: 15 is Greatest

#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if ((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%d is Greatest\n", iFirst);
    }
    else if ((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("%d is Greatest\n", iSecond);
    }
    else
    {
        printf("%d is Greatest\n", iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}