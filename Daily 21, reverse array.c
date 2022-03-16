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

void swapInt(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(int argc, const char * argv[])
{
    int size = 40;
    int array[size];
    int count = 1;
    
    for (int i = 0; i < size; i++) {
        array[i] = i * 3;
    }
    
    for (int i = 0; i < size; i ++) {
        if (count % 11 == 0) {
            printf("\n");
            count = 1;
        }
        printf("%7d", array[i]);
        count++;
    }
    
    printf("\n*****");
    
    swapInt(&array[0], &array[size - 1]);
    
    for (int i = 1; i < size / 2; i ++) {
        swapInt(&array[i], &array[size - (i + 1)]);
    }
    
    for (int i = 0; i < size - 1; i ++) {
        if (i % 10 == 0) {
            printf("\n");
        }
        printf("%7d", array[i]);
    }
    printf("%7d\n", array[size - 1]);
    
    return 0;
}
