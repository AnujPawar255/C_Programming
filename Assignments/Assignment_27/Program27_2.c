/*
///////////////////////////////////////////////////////
// Program Name : Program27_2.c
// Description  : Accept a string and count the number
//                of lowercase characters
// Input        : One string from the user
// Output       : Displays the total number of lowercase
//                characters in the string
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Marvellous
//Output: 9

#include <stdio.h>

int CountSmall(char *str)
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

    iRet = CountSmall(arr);

    printf("%d\n", iRet);

    return 0;
}