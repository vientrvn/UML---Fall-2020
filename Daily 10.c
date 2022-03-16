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


void drawLine(char userChar, int numChar);
void clearKeyboardBuffer(void);

int main(int argc, const char * argv[])
{
    char userChar;
    int numChar;

    printf("Please enter the character you want to draw:\n");
    scanf("%c", &userChar);
    clearKeyboardBuffer();
    printf("Please enter the number of characters you want in your line:\n");
    scanf("%d", &numChar);
    clearKeyboardBuffer();

    while (numChar < 1 || numChar > 79) {
        printf("I'm sorry, that number is unrecognized or out of range, try [1-79]:\n");
        scanf("%d", &numChar);
        clearKeyboardBuffer();
    }

    drawLine(userChar, numChar);

    return 0;
}

void drawLine(char userChar, int numChar){
    for (int i = 0; i < numChar; i++) {
        printf("%c", userChar);
    }

   printf("\n");
}
void clearKeyboardBuffer(void){
    char ch;
    scanf("%c", &ch);
    while (ch != '\n' && ch != '\0') {
        scanf("%c", &ch);
    }
}
