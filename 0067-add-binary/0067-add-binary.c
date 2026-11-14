char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;

    int maxLen = (i > j ? i : j) + 3;
    char* res = (char*)malloc(maxLen * sizeof(char));

    int k = 0;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';

        if (j >= 0)
            sum += b[j--] - '0';

        res[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    res[k] = '\0';

    // Reverse the result
    for (int left = 0, right = k - 1; left < right; left++, right--) {
        char temp = res[left];
        res[left] = res[right];
        res[right] = temp;
    }

    return res;
}