class Solution {
    public boolean isPalindrome(int x) {
        int cpy = x;
        int rev = 0;

        if (x < 0)
            return false;

        while (cpy != 0) {
            rev = rev * 10 + (cpy % 10);
            cpy /= 10;
        }
        return rev == x;

    }
}