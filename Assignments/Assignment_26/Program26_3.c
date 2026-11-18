/*
///////////////////////////////////////////////////////
// Program Name : Program26_3.c
// Description  : Accept a character and display all
//                characters up to Z or in reverse
//                order up to a
// Input        : One character from the user
// Output       : Displays characters from the given
//                character to Z or in reverse to a
// Author       : Anuj Hemant Pawar
// Date         : 18/11/2026
///////////////////////////////////////////////////////
*/

//Input: Q
//Output: Q  R  S  T  U  V  W  X  Y  Z

//Input: m
//Output: m  l  k  j  i  h  g  f  e  d  c  b  a

//Input: 8
//Output: No output

#include <stdio.h>

void Display(char ch)
{
    char cCnt = '\0';

    if (ch >= 'A' && ch <= 'Z')
    {
        for (cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c\t", cCnt);
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t", cCnt);
        }
    }
    else
    {
        return;
    }

    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}