/*
///////////////////////////////////////////////////////
// Program Name : Program5_3.c
// Description  : Calculate the grade of a student
// Input        : Marks out of 100
// Output       : Displays the corresponding grade or
//                Invalid Marks
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 85
//Output: Grade B

//Input: 35
//Output: Fail

//Input: 105
//Output: Invalid Marks

#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
    if (fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks\n");
    }
    else if (fMarks >= 90)
    {
        printf("Grade A\n");
    }
    else if (fMarks >= 75)
    {
        printf("Grade B\n");
    }
    else if (fMarks >= 60)
    {
        printf("Grade C\n");
    }
    else if (fMarks >= 40)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: \n");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}