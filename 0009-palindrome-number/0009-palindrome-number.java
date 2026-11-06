class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0)
            return false;
        int cpy = x;
        int rev = 0;

        while (cpy > 0) {
            rev = rev * 10 + (cpy % 10);
            cpy /= 10;
        }
        return rev == x;

    }
}