#include <string.h>
#include <stdio.h>

char first[100]; /* first name of person we are working with */
char last[100]; /* his/her/their last name */

/* first and last name of the person [computed] */
char full[200];

int main() {
    printf("Enter first name: ");
    fgets(first, sizeof(first), stdin);
    
    printf("Enter last name: ");
    fgets(last, sizeof(last), stdin);

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    printf("The name is %s\n", full);

    return 0;
}