/*
///////////////////////////////////////////////////////
// Program Name : Program25_5.c
// Description  : Accept student division and display
//                the corresponding examination time
// Input        : One character representing division
// Output       : Displays examination schedule
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: A
//Output: Your exam at 7 AM

//Input: B
//Output: Your exam at 8.30 AM

//Input: C
//Output: Your exam at 9.20 AM

//Input: d
//Output: Your exam at 10.30 AM

//Input: E
//Output: Invalid Division

#include <stdio.h>

void DisplaySchedule(char chDiv)
{
    if (chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    if (chDiv == 'A')
    {
        printf("Your exam at 7 AM\n");
    }
    else if (chDiv == 'B')
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if (chDiv == 'C')
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if (chDiv == 'D')
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid Division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : \n");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}