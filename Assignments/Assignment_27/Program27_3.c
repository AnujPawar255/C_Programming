/*
///////////////////////////////////////////////////////
// Program Name : Program27_3.c
// Description  : Accept a string and return the
//                difference between the frequency of
//                lowercase and uppercase characters
// Input        : One string from the user
// Output       : Returns lowercase count minus
//                uppercase count
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Marvellous
//Output: 8 (9 - 1)

#include <stdio.h>

int Difference(char *str)
{
    int iCnt = 0;

    // Filter
    while (*str != '\0')
    {
        // Logic
        if (*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCnt--;
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

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return 0;
}