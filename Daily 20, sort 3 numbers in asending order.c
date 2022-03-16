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
#include <math.h>
void clearKeyboardBuffer(void){
    char ch;
    scanf("%c", &ch);
    while (ch != '\n' && ch != '\0') {
        scanf("%c", &ch);
    }
}

void orderThree(double *num1, double *num2, double *num3);

int main(int argc, const char * argv[])
{
    double num1, num2, num3;
    
    printf("Enter three numbers separated by blanks:\n");
    scanf("%lf%lf%lf", &num1, &num2, &num3);
    
    orderThree(&num1, &num2, &num3);
    
    printf("The numbers in ascending order are: %.2f %.2f %.2f\n", num1, num2, num3);

    return 0;
}

void orderThree(double *num1, double *num2, double *num3) {
    if (*num1 > *num2) {
        double temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
    if (*num2 > *num3) {
        double temp = *num2;
        *num2 = *num3;
        *num3 = temp;
    }
    if (*num1 > *num2) {
        double temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}
