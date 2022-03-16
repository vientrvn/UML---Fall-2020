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
//#include <string.h>
//#include <stdlib.h>
#include <stdio.h>
#define daysAmount 31
typedef struct date {
    int month;
    int day;
    int year;
} Date;

Date getYesterdayDate (Date today) {
    Date convert;
    
    const int daysInMonth[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    //first day of the year case
    if ((today.day - 1) == 0 && (today.month - 1) == 0) {
        convert.month = 12;
        convert.day = 31;
        convert.year = today.year - 1;
    } else if (today.day == 1 && today.month > 1) { //first day of the month case
            convert.month = today.month - 1;
            convert.day = daysInMonth[today.month - 2];
            convert.year = today.year;
        } else {
            convert.month = today.month;
            convert.day = today.day - 1;
            convert.year = today.year;
        }
    
    return convert;
}

int main(int argc, char * argv[]) {
    Date todayDate;
    todayDate.year = 2020;
    
    printf("Please enter a month (1~12):\n");
    scanf("%d", &todayDate.month);
    
    printf("Please enter a valid day in the month (1~30):\n");
    scanf("%d", &todayDate.day);
    
    printf("Today is: %d/%d/%d\n", todayDate.month, todayDate.day, todayDate.year);
    
    Date yesterday = getYesterdayDate(todayDate);
    
    printf("Yesterday is: %d/%d/%d\n", yesterday.month, yesterday.day, yesterday.year);
    
    return 0;
}

