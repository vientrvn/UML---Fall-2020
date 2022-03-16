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

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int findIdenticalPair(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int k = i + 1; k < size; k++) {
            if (arr[i] == arr[k]) {
                return i;
            }
        }
    }

    return -1;
}

int main(int argc, const char * argv[])
{
    double arr[10] = { 1.2, 6.1, 3.3, 3.3, 4.5, 7.9, 5.4, 5.4, 9.9, 1.0};
    
    int index = 0;
    
    index = findIdenticalPair(arr, 10);

    printf("index is: %d\n", index);
    
    return 0;
}
