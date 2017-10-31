int criptChar(char c, int n) {
    return ( (c + n) > 'z' ? ('a' + (c - 'z' - 1)) : (c + n));
}

void crypt(char *string, int c) {
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = criptChar(string[i], c);
    }
}
