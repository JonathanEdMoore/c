/**********************************************************************************************************
 * Exercise 3, Chapter 5 -- program that prints the perimeter of a rectangle given it's height and width. *
 *                                                                                                        *
 *                                                                                                        *
 * Author: Jonathan Moore.                                                                                *
 *                                                                                                        *
 * Purpose: Chapter 5 Exercise.                                                                           *
 *                                                                                                        *
 * Usage:                                                                                                 *
 *      Runs the program and the message appears.                                                         *
 *********************************************************************************************************/

#include <stdio.h>

char line1[100];
char line2[100];
int height;
int width;
int perimeter;

int main() {
    printf("Enter the size of the height: ");

    fgets(line1, sizeof(line1), stdin );
    sscanf(line1, "%d", &height);

    printf("Enther the size of the width: ");

    fgets(line2, sizeof(line2), stdin);
    sscanf(line2, "%d", &width);

    perimeter = 2 * (height + width);

    printf("The Perimeter of a rectangle with a height of %d and width of %d is %d\n", height, width, perimeter);

    return 0;
}