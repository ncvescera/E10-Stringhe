#include <stdio.h>
#include <stdlib.h>

int countCharInString(const char *string, char c);
void countAllInString(const char *string);

int main(int argc, char** argv) {

    countAllInString("nicccccolo");

    return (EXIT_SUCCESS);
}

int countCharInString(const char *string, char c) {
    int count = 0;

    for (int i = 0; string[i] != '\0'; i++)
        if (string[i] == c)
            count++;

    return count;
}

void countAllInString(const char *string) {
    for (int i = 'a'; i < 'z'; i++)
        printf("%c --> %d\n", i, countCharInString(string, i));
}