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

void clearKeyboardBuffer(void){
    char ch;
    scanf("%c", &ch);
    while (ch != '\n' && ch != '\0') {
        scanf("%c", &ch);
    }
}

int main(int argc, const char * argv[])
{
    char playerMove1;
    char playerMove2;
    
    printf("Player-1, please enter your choice <p>aper, <r>ock, or <s>cissors: \n");
    scanf("%c", &playerMove1);
    
    clearKeyboardBuffer();
    
    printf("Player-2, please enter your choice <p>aper, <r>ock, or <s>cissors: \n");
    scanf("%c", &playerMove2);
    
    if (playerMove1 == 'r' || playerMove1 == 'R') {
        if (playerMove2 == 'p' || playerMove2 == 'P') {
            printf("Player-2 wins! Paper covers rock!\n");
        }
        if (playerMove2 == 's' || playerMove2 == 'S') {
            printf("Player-1 wins! Rock breaks scissors!\n");
        } else if (playerMove2 == 'r' || playerMove2 == 'R'){
            printf("Draw, nobody wins.\n");
        }
    }
    
    if (playerMove1 == 'p' || playerMove1 == 'P') {
        if (playerMove2 == 'r' || playerMove2 == 'R') {
            printf("Player-1 wins! Paper covers rock!\n");
        }
        if (playerMove2 == 's' || playerMove2 == 'S') {
            printf("Player-2 wins! Scissors cut paper!\n");
        } else if (playerMove2 == 'p' || playerMove2 == 'P'){
            printf("Draw, nobody wins.\n");
        }
    }
    
    if (playerMove1 == 's' || playerMove1 == 'S') {
        if (playerMove2 == 'p' || playerMove2 == 'P') {
            printf("Player-1 wins! Scissors cut paper!\n");
        }
        if (playerMove2 == 'r' || playerMove2 == 'R') {
            printf("Player-2 wins! Rock breaks scissors!\n");
        } else if (playerMove2 == 's' || playerMove2 == 'S'){
            printf("Draw, nobody wins.\n");
        }
    }

    return 0;
}

