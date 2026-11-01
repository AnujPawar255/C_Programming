/*
///////////////////////////////////////////////////////
// Program Name : Program10_4.c
// Description  : Convert temperature from Fahrenheit
//                into Celsius
// Input        : Temperature in Fahrenheit
// Output       : Displays temperature in Celsius
// Author       : Anuj Hemant Pawar
// Date         : 01/11/2026
///////////////////////////////////////////////////////
*/

//Input: 10
//Output: -12.2222

//Input: 34
//Output: 1.11111

#include <stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %.5f\n", dRet);

    return 0;
}