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

//#include <math.h>
//#include <ctype.h>
//#include <stdbool.h>
//#include <time.h>
//#include <stdlib.h>
//#include <string.h>
#include <stdio.h>
#define size 80

char* reverseString(char input[])
{
    int count = 0;
    
    while (input[count] != '\0' && count != size) {
        count++;
    }
    
    int k = count - 1;
    char temp;
    
    for (int i = 0; i < count / 2; ++i) {
        temp = input[i];
        input[i] = input[k];
        input[k] = temp;
        k--;
    }
    
    return input;
}

int main(int argc, char * argv[])
{
    char input[size];
    int i = 0;
    
    while (i <= size && i == '\0') {
        scanf("%80[^\n]c", &input[i]);
        if (i > size) {
            break;
        }
        i++;
    }
    
    printf("%s\n", input);
    
    printf("%s\n", reverseString(input));
        
    return 0;
}
