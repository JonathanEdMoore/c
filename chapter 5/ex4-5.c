/****************************************************************************************
 * Exercise 4, Chapter 5 -- program that converts kilometers per hour to miles per hour *
 *                                                                                      *
 *                                                                                      *
 * Author: Jonathan Moore.                                                              *
 *                                                                                      *
 * Purpose: Chapter 5 Exercise.                                                         *
 *                                                                                      *
 * Usage:                                                                               *
 *      Runs the program and the message appears.                                       *
 ***************************************************************************************/

#include <stdio.h>

char line[100]; /* input line from console */
int kilometers; /* a kilometer value to convert to miles */
float miles;

int main() {
    printf("Enter a speed in km/h: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &kilometers);

    miles = kilometers * 0.6213712;

    printf("%d km/h is %f mph\n", kilometers, miles);

    return 0;
}