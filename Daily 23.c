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

/*
void clearKeyboardBuffer(void){
    char ch;
    scanf("%c", &ch);
    while (ch != '\n' && ch != '\0') {
        scanf("%c", &ch);
    }
}

void swapInt(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
*/

//#include <draw.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//This stub function indicates the user's choice to convert lengths to metric.
void lengthToMetric() {
    printf("The user wants to convert length_to_metric.\n");
    printf("1. Convert lengths from feet/inches to meters/centimeters\n");
    printf("2. Convert lengths from meters/centimeters to feet/inches\n");
    printf("0. Return to Main Menu\n");
    printf("Please choose from (1, 2, 0:)\n");
}

//This stub function indicates the user's choice to convert lengths to US.
void lengthToUS() {
    printf("The user wants to convert length_to_us.");
    printf("1. Convert lengths from feet/inches to meters/centimeters\n");
    printf("2. Convert lengths from meters/centimeters to feet/inches\n");
    printf("0. Return to main menu\n");
    printf("Please choose from (1, 2, 0):\n");
}

//This stub function indicates the user's choice to convert lengths.
void convertLengths() {
    printf("The user wants to convert_lengths.\n");
    printf("1. Convert lengths from feet/inches to meters/centimeters\n");
    printf("2. Convert lengths from meters/centimeters to feet/inches\n");
    printf("0. Return to main menu\n");
    printf("Please choose from (1, 2, 0):\n");
    
    int userInput;
    scanf("%d", &userInput);
    
    while (userInput != 0) {
        if (userInput == 1) {
            lengthToMetric();
            scanf("%d", &userInput);
        } else if (userInput == 2) {
            lengthToUS();
            scanf("%d", &userInput);
        }
    }
    printf("User chose to go main menu.");

}

//This stub function indicates the user's choice to convert weights to metric.
void weightToMetric() {
    printf("The user wants to convert weight_to_metric.");
}

//This stub function indicates the user's choice to convert weights to US.
void weightToUS() {
    printf("The user wants to convert weight_to_us.\n");
    printf("1. Convert weights from pounds/ounces to kilograms/grams\n");
    printf("2. Convert weights from kilograms/grams to pounds/ounces\n");
    printf("0. Return to Main Menu\n");
    printf("Please choose from (1, 2, 0):");
}

//This stub function indicates the user's choice to convert weights.
void convertWeights() {
    printf("The user wants to convert_weights.\n");
    printf("1. Convert weights from pounds/ounces to kilograms/grams\n");
    printf("2. Convert weights from kilograms/grams to pounds/ounces\n");
    printf("0. Return to Main Menu\n");
    printf("Please choose from (1, 2, 0):\n");
    
    int userInput;
    scanf("%d", &userInput);
    
    while (userInput != 0) {
        if (userInput == 1) {
            weightToMetric();
            scanf("%d", &userInput);
        } else if (userInput == 2) {
            weightToUS();
            scanf("%d", &userInput);
        }
    }
    printf("User chose to go main menu.");
}

//This stub function prints out all the options for the users.
void option() {
    printf("1. convert lengths\n");
    printf("2. convert weights\n");
    printf("0. Exit\n");
    printf("Please choose from (1, 2, 0):\n");
}

int main(int argc, char * argv[])
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
