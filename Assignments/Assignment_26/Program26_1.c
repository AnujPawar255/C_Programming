/*
///////////////////////////////////////////////////////
// Program Name : Program26_1.c
// Description  : Display ASCII table containing symbol,
//                decimal, hexadecimal and octal values
// Input        : No input
// Output       : Displays ASCII table from 0 to 255
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: No input
//Output: Displays ASCII values from 0 to 255 in decimal,
//        hexadecimal and octal representations

#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\t\tDecimal\t\tHexadecimal\tOctal\n");
    printf("---------------------------------------------------\n");

    for (iCnt = 0; iCnt <= 255; iCnt++)
    {
        if (iCnt == 32)
        {
            printf("%-12s", "SPACE");
        }
        else if (iCnt >= 33 && iCnt <= 126)
        {
            printf("%-12c", iCnt);
        }
        else
        {
            printf("%-12s", "N/A");
        }

        printf("%-16d %-16X %o\n", iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}