/*
///////////////////////////////////////////////////////
// Program Name : Program10_1.c
// Description  : Calculate the area of a circle using
//                radius and PI value 3.14
// Input        : Radius of the circle
// Output       : Displays the area of the circle
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 5.3
//Output: 88.2026

//Input: 10.4
//Output: 339.6224

#include <stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius:\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %.4f\n", dRet);

    return 0;
}