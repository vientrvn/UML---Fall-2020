//
//  main.c
//  Workshop
//
//  Created by Vien Tran on 9/19/20.
//

/*
 Computing I -- COMP.1010

Honor Statement  The practice of good ethical behavior is essential for maintaining good order in the classroom, providing an enriching learning experience for students, and as training as a practicing computing professional upon graduation.  This practice is manifested in the University's Academic Integrity policy. Students are expected to strictly avoid academic dishonesty and adhere to the Academic Integrity policy as outlined in the course catalog.  Violations will be dealt with as outlined therein.  All programming assignments in this class are to be done by the student alone.  No outside help is permitted except the instructor and approved tutors.  I certify that the work submitted with this assignment is mine and was generated in a manner consistent with this document, the  course academic policy on the course website on Blackboard, and the UMass Lowell academic code.

Date:

Name: Vien Tran

*/
/*
 
Author: Vien Tran

Date: <today's date>

Purpose: <What does this code do?>

Sources of Help:

Time Spent:

*/
 
#include <stdio.h>

int main(int argc, const char * argv[])
{
    double userScore;
    double sum = 0;
    int count= 0;
    double average;
    
    printf("Enter a positive score (0 or negative to quit): ");
    scanf("%lf", &userScore);
    
    if (userScore <= 0 && count == 0) {
        printf("No sum and average calculated!\n");
    }
    
    while (userScore > 0) {
        sum += userScore;
        count++;
        printf("Enter a positive score (0 or negative to quit): ");
        scanf("%lf", &userScore);
    }
    
    if (count > 0) {
        average = sum / count;
        printf("The sum is: %.2lf, average is: %.2lf\n", sum, average);
    }
    
    return 0;
}
