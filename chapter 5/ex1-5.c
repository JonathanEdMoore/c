/****************************************************************************
 * Exercise 1, Chapter 5 -- program that converts line to Fahrenheit. *
 *                                                                          *
 *                                                                          *
 * Author: Jonathan Moore.                                                  *
 *                                                                          *
 * Purpose: Chapter 5 Exercise.                                             *
 *                                                                          *
 * Usage:                                                                   *
 *      Runs the program and the message appears.                           *
 ***************************************************************************/

#include <stdio.h>

char line[100]; /* input line from console */
int centigrade; /* a centigrade to convert to fahrenheit */
float fahrenheit;

int main() {
    printf("Enter a temperature in Centigrade: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &centigrade);

    fahrenheit = (9.0/5 * centigrade) + 32;

    printf("%d Centigrade is %f Fahrenheit\n", centigrade, fahrenheit);

    return 0;
    
}