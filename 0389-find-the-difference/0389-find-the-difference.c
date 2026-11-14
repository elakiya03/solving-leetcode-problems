char findTheDifference(char* s, char* t) {
    if (strlen(s) == 0)
        return *t;

    int freq[26] = {0};

    for (int i = 0; s[i]; i++) {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; t[i]; i++) {
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] == -1) {
            return i + 'a';
        }
    }

    return '\0';
}
