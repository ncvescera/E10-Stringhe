#include <stdio.h>
#include <stdlib.h>

#define UPPER 'A'-'a'

int toUpperChar(char c);
void toUpperString(char *string);

int main(int argc, char** argv) {

    char stringa[] = "nicolo";

    toUpperString(stringa);

    puts(stringa);

    return (EXIT_SUCCESS);
}

int toUpperChar(char c) {
    if (c >= 'a' && c <= 'z')
        return (c + UPPER);
    else
        return c;
}

void toUpperString(char *string) {
    for (int i = 0; string[i] != '\0'; i++)
        string[i] = toUpperChar(string[i]);
}
