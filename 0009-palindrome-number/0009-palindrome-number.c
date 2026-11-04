bool isPalindrome(int x) {
    long long rev = 0;
    int cpy = x;
    if (x < 0)
        return false;

    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    return rev == cpy ? true : false;
}