#include <stdio.h>
#include <stdlib.h>
#include "crypt.h"
#include "decrypt.h"

int main(int argc, char** argv) {

    char stringa[] = "sofia";

    printf("Stringa iniziale: %s\n", stringa);

    crypt(stringa, 1);
    printf("Crypt ---> %s\n", stringa);

    decrypt(stringa, 1);
    printf("Decrypt ---> %s\n", stringa);

    return (EXIT_SUCCESS);
}

