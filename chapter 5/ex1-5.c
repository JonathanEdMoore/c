/****************************************************************************
 * Exercise 1, Chapter 5 -- program that converts Centigrade to Fahrenheit. *
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
int value; /* a value to convert to fahrenheit */
float fahrenheit;

int main() {
    printf("Enter a value: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &value);

    fahrenheit = (9.0/5 * value) + 32;

    printf("%d Centigrade is %f Fahrenheit\n", value, fahrenheit);

    return 0;
    
}