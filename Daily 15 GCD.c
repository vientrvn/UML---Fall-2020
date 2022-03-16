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

int getInt (int firstInt) {
    printf("I'm sorry, that number is unrecognized or not positive.\n");
    printf("Please enter a positive integer:\n");
    scanf("%d", &firstInt);
    clearKeyboardBuffer();
    return firstInt;
}

int getGCD (int firstInt, int secondInt) {
    int GCD;
    int numEqual;
    int numTest;
    int numMult;
    int numRemain;
    
    if (firstInt > secondInt) {
        numEqual = firstInt;
        numTest = secondInt;
    } else {
        numEqual = secondInt;
        numTest = firstInt;
    }
    
    numMult = numEqual / numTest;
    numRemain = numEqual % numTest;
    
    while (numRemain != 0) {
        numEqual = numTest;
        numTest = numRemain;
        numMult = numEqual / numTest;
        numRemain = numEqual % numTest;
    }

    GCD = numTest;
    
    return GCD;
}

int main(int argc, const char * argv[])
{
    int firstInt;
    int secondInt;
    
    printf("Please enter a positive number:\n");
    scanf("%d", &firstInt);
    
    while (firstInt <= 0) {
        firstInt = getInt(firstInt);
    }
    
    printf("Please enter a second positive integer:\n");
    scanf("%d", &secondInt);
    
    while (secondInt <= 0) {
        secondInt = getInt(secondInt);
    }
    
    printf("The largest integer that divides both %d and %d is: %d\n", firstInt, secondInt, getGCD(firstInt, secondInt));
    
    return 0;
}
