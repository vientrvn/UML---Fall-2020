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
//#include <math.h>

enum Choice {ROCK , PAPER, SCISSORS};
typedef enum Choice choice;

void clearKeyboardBuffer(void){
    char ch;
    scanf("%c", &ch);
    while (ch != '\n' && ch != '\0') {
        scanf("%c", &ch);
    }
}

int getChoice(char choice1) {
    
    switch (choice1) {
        case 'r':
        case 'R':
            return ROCK;
            break;
        case 'p':
        case 'P':
            return PAPER;
            break;
        case 's':
        case 'S':
            return SCISSORS;
            break;
        default:
            return 1;
            break;
    }
}

void checkWinner(choice choice1, choice choice2) {
    switch (choice1) {
       case PAPER :
          switch(choice2)
          {
          case ROCK:
             printf("Player-1 wins! Paper covers rock!\n");
             break;
          case SCISSORS :
             printf("Player-2 wins! Scissors cut paper!\n");
             break;
          case PAPER:
             printf("Draw, nobody wins.\n");
             break;
          }
            break;
       case ROCK :
          switch(choice2)
          {
             case ROCK:
                 printf("Draw, nobody wins.\n");
                 break;
             case PAPER:
                 printf("Player-2 wins! Paper covers rock!\n");
                 break;
             case SCISSORS:
                 printf("Player-1 wins! Rock breaks scissors!\n");
                 break;
          }
            break;
       case SCISSORS:
          switch(choice2)
          {
             case ROCK :
                 printf("Player-2 wins! Rock breaks scissors!\n");
                 break;
             case PAPER:
                 printf("Player-1 wins! Scissors cut paper!\n");
                 break;
             case SCISSORS:
                 printf("Draw, nobody wins.\n");
                 break;
          }
            break;
    }
}

int getInput(char choice1, int count) {
    char move;
    printf("Player-%d, please enter your choice <p>aper, <r>ock, or <s>cissors: \n", count);
    scanf("%c", &move);
    clearKeyboardBuffer();
    while (move != 'r' && move != 'R' && move != 's' && move != 'S' && move != 'p' && move != 'P') {
        printf("I do not understand. Please enter your choice <p>aper, <r>ock, or <s>cissors:\n");
        scanf("%c", &move);
        clearKeyboardBuffer();
    }
    return move;
}

int main(int argc, const char * argv[])
{
    char choice1;
    char choice2;
    int count = 1;
    
    choice1 = getInput(choice1, count);
    count++;
    //clearKeyboardBuffer();
    
    choice2 = getInput(choice1, count);
    
    choice choiceOne = getChoice(choice1);
    choice choiceTwo = getChoice(choice2);
    
    checkWinner(choiceOne, choiceTwo);
    
    return 0;
}
