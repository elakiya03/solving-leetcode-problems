
class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int sign = 1;
        long long n = 0;

        // Step 1: Skip leading spaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Step 2: Check sign
        if (i < s.length() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < s.length() && s[i] == '+') {
            i++;
        }

        // Step 3: Convert digits
        long long limit = (sign == 1) ? INT_MAX : 2147483648LL;

        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {

            int digit = s[i] - '0';

            // Step 4: Check overflow
            if (n > (limit - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            n = n * 10 + digit;
            i++;
        }

        // Step 5: Apply sign
        return n * sign;
    }
};
