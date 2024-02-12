#include <stdio.h>

void GetString(char *string);
char GetLetterToSearch();
int GetOccurences(char string[], char letter);
void PrintOccurences(int occurences, char letter);

int main()
{
    char string[150];
    char *pointerString;
    pointerString = string;

    GetString(pointerString);

    char letter = GetLetterToSearch();

    int occurences = GetOccurences(pointerString, letter);

    PrintOccurences(occurences, letter);

    return 0;
}

void GetString(char *string)
{
    printf("This program asks for a string and a letter. It identifies how many of that letter are in the string. \n");
    printf("Please enter a string: ");
    scanf(" %[^\n]", string);
}

char GetLetterToSearch()
{
    char letter;
    printf("Please enter a letter to search: ");
    scanf(" %c", &letter);
    return letter;
}

int GetOccurences(char string[], char letter)
{

    int occurences = 0;

    while (*string != '\0')
    {
        if (*string == letter)
        {
            occurences++;
        }

        string++;
    }
    return occurences;
}

void PrintOccurences(int occurences, char letter)
{
    printf("There is/are %d %c's in the provided string!", occurences, letter);
}
