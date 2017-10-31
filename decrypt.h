int subChar(char c, int n) {
    c -= n;
    if (c < 'a')
        c = 'z' - ('a' - c - 1);

    return c;
}

void decrypt(char *string, int c) {
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = subChar(string[i], c);
    }
}
