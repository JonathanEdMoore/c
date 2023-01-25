/*******************************************************************************************
 * Exercise 3, Chapter 4 -- compute the area and perimeter of a rectangle.                 *
 *                                                                                         *
 *                                                                                         *
 * Author: Jonathan Moore.                                                                 *
 *                                                                                         *
 * Purpose: Chapter 4 Exercise.                                                            *
 *                                                                                         *
 * Usage:                                                                                  *
 *      Runs the program and the message appears.                                          *
 *******************************************************************************************/

#include <stdio.h>
int area; /* area of the rectangle */
int perimeter; /* perimeter of the rectangle */
int width; /* width of the rectangle */
int height; /* height of the rectangle */

int main() {
    width = 3; /* Width of 3 inches */
    height = 5; /* height of 5 inches */
    area = height * width; /* Area is equal to height multiplied by width. */
    perimeter = 2 * (height + width); /* Perimeter is equal to height plus width multiplied by 2. */

    printf("The rectangle has an area of %d and a perimeter of %d\n", area, perimeter);
    return (0);
}