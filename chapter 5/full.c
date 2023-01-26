#include <string.h>
#include <stdio.h>

char first[100]; /* first name */
char last[100]; /* last name */
char full_name[200]; /* full name */

int main() {
    strcpy(first, "Steve"); /* initializes first name */
    strcpy(last, "Qualline"); /* initializes last name */
    strcpy(full_name, first); /* full = "Steve" */
    strcat(full_name, " "); /* full = "Steve " */
    strcat(full_name, last); /* full = "Steve Qualline" */
    printf("The full name is %s\n", full_name);
    return 0;
}