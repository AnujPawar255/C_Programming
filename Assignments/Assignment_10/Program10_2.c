/*
///////////////////////////////////////////////////////
// Program Name : Program10_2.c
// Description  : Calculate the area of a rectangle
//                using width and height
// Input        : Width and height of the rectangle
// Output       : Displays the area of the rectangle
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5.3 9.78
//Output: 51.834

#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width:\n");
    scanf("%f", &fValue1);

    printf("Enter height:\n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %.3f\n", dRet);

    return 0;
}