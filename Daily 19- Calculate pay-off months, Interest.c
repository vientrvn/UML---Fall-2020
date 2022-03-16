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

double getCost(double cost){
    do {
        printf("Enter the cost (>500.00):\n");
        scanf("%lf", &cost);
        clearKeyboardBuffer();
    } while (cost <= 500.00);
    
    return cost;
}

int main(int argc, const char * argv[])
{
    const double interestRate = 0.015;
    const int monthlyPayment = 50;
    
    double cost;
    int month = 0;
    double interestPaid = 0;
    double principalPayment;
    
    cost = getCost(cost);
    
    do {
        principalPayment = monthlyPayment - (interestRate * cost);
        interestPaid += (interestRate * cost);
        cost -= principalPayment;
        month++;
    } while (cost >= 0);

    //controll
    cost = monthlyPayment - fabs(cost);

    printf("It takes %d months to pay off the loan.\n", month);
    printf("The total amount of interest paid is: %.2lf.\n", interestPaid);
    printf("The amount of final payment is: %.2lf\n", cost);
    
    return 0;
}
