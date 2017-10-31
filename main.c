#include <stdio.h>
#include <stdlib.h>

int countCharInString(const char *string, char c);

int main(int argc, char** argv) {

    printf("%d\n", countCharInString("niccolo", 'c'));

    return (EXIT_SUCCESS);
}

int countCharInString(const char *string, char c) {
    int count = 0;

    for (int i = 0; string[i] != '\0'; i++)
        if (string[i] == c)
            count++;

    return count;
}
