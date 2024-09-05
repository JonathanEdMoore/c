/****************************************************************************
 * Exercise 2, Chapter 5 -- program that calculates the volume of a sphere. *
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
#include <math.h>

char line[100]; /* input line from console */
int radius; /* the radius to use to calculate the volume */
const float PI = 3.1415927; /* Setting the constant for Pi */
float volume;

int main() {
    printf("Enter the size of the radius: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &radius);

    volume = (4.0/3.0) * PI * pow(radius, 3);

    printf("The Volume of a sphere with a radius of %d is %f\n", radius, volume);

    return 0;
}
