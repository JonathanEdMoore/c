/*******************************************************************************************
 * Exercise 5, Chapter 4 -- Deliberate mistakes.                                           *
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

float decimal; /* Decimal for float mistake */
int integer; /* Integer for int mistake */
char character; /* Character for char mistake */

int main() {
    decimal = 1.0; /* Assign 1.0 to decimal */
    integer = 1; /* Assign 1 to an integer */
    character = '1'; /* Assign '1' to character */

    printf("Decimal mistake %f\n", decimal);
    printf("Integer mistake %d\n", integer);
    printf("Character mistake %d\n", character);
    return 0;
}