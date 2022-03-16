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

//This stub function indicates the user's choice to convert lengths.
void convertLengths() {
    printf("The user wants to convert_lengths.\n");
}

//This stub function indicates the user's choice to convert weights.
void convertWeights() {
    printf("The user wants to convert_weights.\n");
}

//This stub function prints out all the options for the users.
void option() {
    printf("1. convert lengths\n");
    printf("2. convert weights\n");
    printf("0. Exit\n");
    printf("Please choose from (1, 2, 0):\n");
}

int main(int argc, const char * argv[])
{
    int userChoice;
    
    option();
    scanf("%d", &userChoice);
        
    while (userChoice != 0) {
        if (userChoice == 1) {
            convertLengths();
            printf("\n");
            option();
            scanf("%d", &userChoice);
        } else if (userChoice == 2) {
            convertWeights();
            printf("\n");
            option();
            scanf("%d", &userChoice);
        }
    }
    
    printf("User chose to exit.\n");

    return 0;
}
