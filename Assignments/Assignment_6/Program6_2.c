/*
///////////////////////////////////////////////////////
// Program Name : Program6_2.c
// Description  : Check student admission eligibility
// Input        : Student marks and age
// Output       : Displays admission eligibility or
//                an invalid input message
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 75 18
//Output: Eligible for Admission

//Input: 55 19
//Output: Not Eligible

//Input: 80 16
//Output: Not Eligible

//Input: 105 18
//Output: Invalid Input

//Input: 75 -5
//Output: Invalid Input

#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if ((fMarks < 0 || fMarks > 100) || (iAge < 0))
    {
        printf("Invalid Input\n");
    }
    else if ((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: \n");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}