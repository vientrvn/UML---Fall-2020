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
#include <string.h>
#include <stdio.h>

#define METERS_IN_FOOT       0.3048

#define INCHES_IN_FOOT       12

#define CENTIMETERS_IN_METER 100

#define OUNCES_IN_POUND      16

#define POUNDS_IN_KILOGRAM   2.2046

#define GRAMS_IN_KILOGRAMS   1000

void readLengthUs(int* feet, double* inches){
    printf("Enter feet and inches (seperated by a space):\n");
    scanf("%d %lf", feet, inches);
}

void convert_length_to_metric(int feet, double inches, int* meters, double* centimeters) {
    inches = inches + 12 * feet;
    *centimeters = inches * 2.54;
    
    int count = 0;
    while (*centimeters >= 100) {
        *centimeters -= 100;
        count++;
    }
    
    *meters = count;
}

void outputLengthMetric(int* feet, double* inches, int* meters, double* centimeters){
    printf("%d feet and %.4lf inches convert to %d meters and %.4lf centimeters\n", *feet, *inches, *meters, *centimeters);
}

//This stub function indicates the user's choice to convert lengths to metric.
void lengthToMetric() {
    int feet, meters;
    double inches, centimeters;

    readLengthUs(&feet, &inches);
    convert_length_to_metric(feet, inches, &meters, &centimeters);
    outputLengthMetric(&feet, &inches, &meters, &centimeters);
    
}

void readLengthMetric(int* m, double* cm) {
    printf("Enter meters and centimeters (separated by a space):\n");
    scanf("%d %lf", m, cm);
}

void convert_length_to_us(int m, double cm, int* ft, double* inch) {
    cm += m * 100;
    *inch = cm / 2.54;

    int count = 0;
    while (*inch > 12) {
        *inch -= 12;
        count++;
    }
    
    *ft = count;
}

void outputLengthUs(int* m, double* cm, int* ft, double* inch) {
    printf("%d meters and %.4lf centimeters converted to %d feet and %.4lf inches\n", *m, *cm, *ft, *inch);
}


//This stub function indicates the user's choice to convert lengths to US.
void lengthToUS() {
    int m, ft;
    double cm, inch;
    
    readLengthMetric(&m, &cm);
    convert_length_to_us(m, cm, &ft, &inch);
    outputLengthUs(&m, &cm, &ft, &inch);
}

//This stub function indicates the user's choice to convert lengths.
void convertLengths() {
    printf("1. convert lengths to metric\n");
    printf("2. convert lengths to US\n");
    printf("0. Return to Main Menu\n");
    
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

void readWeightMetric(int* lbs, double* oz) {
    printf("Enter pound and ounces (separated by a space):\n");
    scanf("%d %lf", lbs, oz);

}

void convert_weight_to_metric(int lbs, double oz, int* kg, double* g) {
    double lbsTemp = lbs + oz / OUNCES_IN_POUND;
    double kgTemp = lbsTemp / POUNDS_IN_KILOGRAM;
    int count = 0;
    while (kgTemp > 1) {
        kgTemp -= 1;
        count++;
    }
    
    *g = kgTemp * GRAMS_IN_KILOGRAMS;
    *kg = count;
}

void outputWeightMetric(int* lbs, double* oz, int* kg, double* g) {
    
    printf("%d pounds and %.4lf ounces converted to %d kilograms and %.4lf grams. \n", *lbs, *oz, *kg, *g);
    printf("\n");
}


//This stub function indicates the user's choice to convert weights to metric.
void weightToMetric() {
    int lbs, kg;
    double oz, g;
    
    readWeightMetric(&lbs, &oz);
    convert_weight_to_metric(lbs, oz, &kg, &g);
    outputWeightMetric(&lbs, &oz, &kg, &g);
    
    printf("1. convert weights from pounds/ounces to kilograms/grams\n");
    printf("2. convert weights from kilograms/grams to pounds/ounces\n");
    printf("0. Return to Main Menu\n");
}

void readWeightUs(int* kg, double* g) {
    printf("Enter kilograms and grams (seperated by a space):\n");
    scanf("%d %lf", kg, g);
}

void convert_weight_to_us(int kg, double g, int* lbs, double* oz) {
    double kgTemp = kg + g / GRAMS_IN_KILOGRAMS;
    double lbsTemp = kgTemp * POUNDS_IN_KILOGRAM;
    
    int count = 0;
    
    while (lbsTemp > 1) {
        lbsTemp -= 1;
        count++;
    }
    
    *oz = lbsTemp * OUNCES_IN_POUND;
    *lbs = count;
}

void outputWeightUs(int* kg, double* g, int* lbs, double* oz) {
    printf("%d kilograms and %.4lf grams converted to %d pounds and %.4lf ounces\n", *kg, *g, *lbs, *oz);
}

//This stub function indicates the user's choice to convert weights to US.
void weightToUS() {
    int kg, lbs;
    double g, oz;
    
    readWeightUs(&kg, &g);
    convert_weight_to_us(kg, g, &lbs, &oz);
    outputWeightUs(&kg, &g, &lbs, &oz);
    
}

//This stub function indicates the user's choice to convert weights.
void convertWeights() {
    printf("1. convert weights from pounds/ounces to kilograms/grams\n");
    printf("2. convert weights from kilograms/grams to pounds/ounces\n");
    printf("0. Return to Main Menu\n");
    
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
    printf("\n");
}

//This stub function prints out all the options for the users.
void option() {
    printf("1. convert lengths\n");
    printf("2. convert weights\n");
    printf("0. Exit\n");
    printf("Please choose from (1, 2, 0): \n");
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
