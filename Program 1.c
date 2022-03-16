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

void conject(int whileCount, int n, int endPoint, int count) {
    while (whileCount < endPoint + 1) {
        for (int rowCount = 0; rowCount < 7; rowCount++) {
            if (whileCount <= endPoint) {
                count = 0;
                n = whileCount;
                while (n != 1) {
                    if (n % 2 == 0) {
                        n = n / 2;
                    } else if (n % 2 != 0) {
                        n = 3 * n + 1;
                    }
                    count++;
                }
                printf("%5d:%-5d", whileCount, count);
                whileCount++;
            }
        }
        printf("\n");
    }
}

int main(int argc, const char * argv[])
{
    int n;
    int endPoint;
    int count = 0;

    printf("Enter a starting point:\n");
    scanf("%d", &n);
    clearKeyboardBuffer();
    while (n <= 1 || n >= 100) {
        printf("Enter a valid starting point (from 2 - 99):\n");
        scanf("%d", &n);
        clearKeyboardBuffer();
    }
    
    printf("Enter an ending point:\n");
    scanf("%d", &endPoint);
    while (endPoint <= 3 || endPoint >= 1000) {
        printf("Enter a valid ending point (from 4 - 999):\n");
        scanf("%d", &endPoint);
    }
    
    int whileCount = n;

    conject(whileCount, n, endPoint, count);
    
    return 0;
}
