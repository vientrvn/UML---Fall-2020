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
//#include <stdlib.h>
//#include <ctype.h>
//#include <stdbool.h>
//#include <string.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    FILE *inputFile;
    FILE *outputFile;
    
    inputFile = fopen("quiz.txt", "r");
    outputFile = fopen("average.txt", "w");
    
    int grades = 0;
    char ch;
    int count = 0;
    int sum = 0;
    
    int clearInputName = fscanf(inputFile, "%c", &ch);
    while (clearInputName == 1 && ch != ' ') {
        clearInputName = fscanf(inputFile, "%c", &ch);
    }

    clearInputName = fscanf(inputFile, "%c", &ch);
    while (clearInputName == 1 && ch != ' ') {
        clearInputName = fscanf(inputFile, "%c", &ch);
    }
        
    while (!feof(inputFile)) {
        fscanf(inputFile, "%d", &grades);
        fprintf(outputFile, "%4d", grades);
        count++;
        sum += grades;
    }
    
    fclose(inputFile);
    
    while (count < 10) {
        grades = 0;
        fprintf(outputFile, "%4d", grades);
        count++;
    }

    double average = (double)sum / 10;

    fprintf(outputFile, "%10.2lf", average);

    fclose(outputFile);

    outputFile = fopen("average.txt", "r");

    char readAvgFile;
    while(!feof(outputFile)) {
        fscanf(outputFile, "%c", &readAvgFile);
        printf("%c", readAvgFile);
    }
    
    fclose(outputFile);

    return 0;
}

