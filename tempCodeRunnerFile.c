#include <stdio.h>

void GetString(char *string);

int main()
{
    char string[150];
    char *pointerString;
    pointerString = string;

    GetString(pointerString);

    printf("String: %s", string);

    return 0;
}

void GetString(char *string) {
    printf("This program asks for a string and a letter. It identifies how many of that letter are in the string. \n");
    printf("Please enter a string: ");
    scanf(" %[^n]", string);

}