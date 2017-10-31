#include <stdio.h>
#include <stdlib.h>

int strlength(const char *string);
void inverse(char *string);

int main(int argc, char** argv) {

    char stringa[] = "ciao";

    inverse(stringa);

    printf("%s\n", stringa);

    return (EXIT_SUCCESS);
}

int strlength(const char *string) {
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
        count++;

    //printf("%d\n",count );
    return count;
}

void inverse(char *string) {
    int slen = strlength(string) - 1;
    char temp;

    for (int i = 0; i < slen - 1; i++) {
        temp = string[i];
        string[i] = string[slen - i];
        string[slen - i] = temp;

    }
}
