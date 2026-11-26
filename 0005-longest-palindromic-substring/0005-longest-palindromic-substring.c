char* longestPalindrome(char* s) {
    int len = strlen(s);

    int dp[len][len];
    memset(dp, 0, sizeof(dp));

    int start = 0;
    int maxl = 1;

    for (int i = 0; i < len; i++) {
        dp[i][i] = 1;
    }

    for (int i = 0; i < len - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 1;
            if (maxl == 1) {
                maxl = 2;
                start = i;
            }
        }
    }

    for (int k = 3; k <= len; k++) {
        for (int i = 0; i < len - k + 1; i++) {
            int j = k + i - 1;

            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = 1;
                if (k > maxl) {
                    maxl = k;
                    start = i;
                }
            }
        }
    }

    char* result = malloc(maxl + 1);

    // Copy the palindrome and add the null terminator.
    memcpy(result, s + start, maxl);
    result[maxl] = '\0';
    return result;
}