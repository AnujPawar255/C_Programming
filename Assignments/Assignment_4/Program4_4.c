/*
///////////////////////////////////////////////////////
// Program Name : Program4_4.c
// Description  : Check voting eligibility based on age
// Input        : One integer representing the age
// Output       : Displays voting eligibility status
// Author       : Anuj Hemant Pawar
// Date         : 18/10/2026
///////////////////////////////////////////////////////
*/

//Input: 21
//Output: Eligible for Voting

//Input: 16
//Output: Not Eligible for Voting

//Input: -5
//Output: Invalid Age

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if (iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if (iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: \n");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}