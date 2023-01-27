#include <string.h>
#include <stdio.h>

char first[100]; /* first name of the person we are working with */
char last[100]; /* his/her/their last name */

/* first and last name of the person [computed] */
char full[200];

int main() {
    printf("Enter first name: ");
    fgets(first, sizeof(first), stdin);
    /* trim off last character */
    first[strlen(first) - 1] = '\0';

    printf("Enter last name: ");
    fgets(last, sizeof(last), stdin);
    /* trim off last character */
    last[strlen(last) - 1] = '\0';

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    printf("The name is %s\n", full);

    return 0;
}