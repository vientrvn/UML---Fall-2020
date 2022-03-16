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

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
    FILE *inputFile;
        
    inputFile = fopen("/Users/vientran/Desktop/College/Computing 1/zyBook/numbers.txt", "r");
        
    int data;
    int count = 0;
    int sum = 0;
    int smallest = 0;
    int largest = 0;
    
    while (fscanf(inputFile, "%d", &data) != EOF) {
        count++;
        sum += data;
        if (data < smallest) {
            smallest = data;
        }
        if (data > largest) {
            largest = data;
        }
    }
    
    printf("%d numbers\n", count);
    printf("%d\n", sum);

    double average = (double)sum / (double)count;
    
    printf("The smallest integer in the file is %d.\n", smallest);
    printf("The largest integer in the file is %d.\n", largest);
    printf("The average of all the numbers is %lf.\n", average);
    
    fclose(inputFile);
    
    return 0;
}

