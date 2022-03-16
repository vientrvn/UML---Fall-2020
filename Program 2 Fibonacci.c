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

int getCrud(int crud) {
    printf("Please enter the initial size of the green crud:\n");
    int chosenCrud = scanf("%d", &crud);
    clearKeyboardBuffer();
    while (crud < 0 || chosenCrud != 1) {
        printf("I'm sorry that value is unrecognized or is negative.\n");
        printf("Please enter the initial size of the green crud:\n");
        chosenCrud = scanf("%d", &crud);
        clearKeyboardBuffer();
    }
    return crud;
}

int getDay(int day) {
    printf("Please enter the number of days:\n");
    int chosenDay = scanf("%d", &day);
    clearKeyboardBuffer();
    while (day < 0 || chosenDay != 1) {
        printf("I'm sorry that value is unrecognized or is negative.\n");
        printf("Please enter the number of days:\n");
        chosenDay = scanf("%d", &day);
        clearKeyboardBuffer();
    }
    return day;
}

void getPop(int crud, int day, int result) {
    int count = day / 5;
    int first = 0;
    int second = crud;
    result = crud;
    
    for (int i = 1; i <= count; i++) {
        result = first + second;
        first = second;
        second = result;
        
    }
    printf("The final population would be %d pounds.\n", result);
}

char getOpt(char cont) {
    printf("Would you like to continue? (y/n)");
    scanf("%c", &cont);
    clearKeyboardBuffer();
    while (cont != 'y' && cont != 'n') {
        printf("Would you like to continue? (y/n)");
        scanf("%c", &cont);
        clearKeyboardBuffer();
    }
    
    return cont;
}
int main(int argc, const char * argv[])
{
    char cont = 'y';
    int crud = 0;
    int day = 0;
    int result = 0;
    
    while (cont != 'n') {
        crud = getCrud(crud);
    
        day = getDay(day);
    
        getPop(crud, day, result);
        
        cont = getOpt(cont);
        
    }
    
    return 0;
}
