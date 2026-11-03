class Solution {
public:
    int reverse(int num) {
        long rev = 0;

        while (num != 0) {
            int digit = num % 10;

            // check overflow BEFORE updating
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return 0;

            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                return 0;

            rev = rev * 10 + digit;
            num /= 10;
        }

        return rev;
    }
};