/*
///////////////////////////////////////////////////////
// Program Name : Program27_1.c
// Description  : Accept a string and count the number
//                of capital characters
// Input        : One string from the user
// Output       : Displays the total number of capital
//                characters in the string
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Marvellous Multi OS
//Output: 4

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    // Filter
    while (*str != '\0')
    {
        // Logic
        if (*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%19[^\n]", arr);

    iRet = CountCapital(arr);

    printf("%d\n", iRet);

    return 0;
}